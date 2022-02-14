#Definition

NAME		=	libft.a
INCLUDES	=	include/
SRC_DIR 	=	src/
OBJ_DIR		=	obj/
OUT_DIR		=	out/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#Directory

FTIS_DIR	=	ft_is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTMEM_DIR	=	ft_mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset ft_memcpy

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FTTO_DIR	=	ft_to/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_strchr ft_strdup ft_strjoin ft_split \
				ft_strlcat ft_strlcpy ft_strlen ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr \
				ft_strncpy ft_strndup ft_strnew ft_strmapi \
				ft_striteri

FTLST_DIR	=	ft_lst/
FTLST		=	ft_lstnew ft_lstadd_front ft_lstadd_back \
				ft_lstlast ft_lstsize \
				ft_lstdelone ft_lstclear \
				ft_lstiter ft_lstmap

#FileCreate

SRC_FILES+=$(addprefix $(FTIS_DIR),$(FTIS))
SRC_FILES+=$(addprefix $(FTMEM_DIR),$(FTMEM))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
BONUS_FILES+=$(addprefix $(FTLST_DIR),$(FTLST))

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
BONUS_OBJ	= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(BONUS_FILES)))

OBJF		=	.cache_exists

all:			$(NAME)

$(OBJF):
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(FTIS_DIR)
			@mkdir -p $(OBJ_DIR)$(FTMEM_DIR)
			@mkdir -p $(OBJ_DIR)$(FTPUT_DIR)
			@mkdir -p $(OBJ_DIR)$(FTTO_DIR)
			@mkdir -p $(OBJ_DIR)$(FTSTR_DIR)
			@mkdir -p $(OBJ_DIR)$(FTLST_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
			@echo Compiling:
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
			@echo Compiling Success file is : $< $(SRC_DIR) $@ 

bonus:		$(BONUS_OBJ)
			@$(AR) $(NAME) $(BONUS_OBJ)
			@echo "Libft bonus compiled!"

norm:
			@norminette $(SRC) $(INCLUDES) | grep -v Norme -B1 || true
			@echo Norminatte exception

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo Libft compiled!

clean:
			@$(RM) -rf $(OBJ_DIR)
			@$(RM) -f $(OBJF)const
			@echo Libft objects files cleaned!

fclean:		clean
			@$(RM) -f $(NAME)
			@echo Libft executable files cleaned!

re:			fclean all
			@echo Cleaned and rebuilt

.PHONY:		all clean fclean re bonus norm
