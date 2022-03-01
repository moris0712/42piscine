NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I

LIBFT = libft
INCLUDE = include

SRC_DIR = src/
OBJ_DIR = obj/

RM = rm -f
AR = ar rcs

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRC_FILES	= ft_printf.c    \
			  number.c       \
			  character.c    \

SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

OBJF		=	.cache_exists

all: $(NAME)

$(NAME): $(OBJS)
			@make -C $(LIBFT)
			@cp $(LIBFT)/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"


$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
		$(RM) -rf $(OBJ_DIR)
		make clean -C $(LIBFT)
		@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean:	clean
			$(RM) -f $(NAME)
			$(RM) -f $(LIBFT)/libft.a
			@echo "$(CYAN)ft_printf executable files cleaned!$(DEF_COLOR)"
			@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:		fclean all
		@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"

.PHONY:		all clean fclean re
