NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I

LIBFT = libft
INCLUDE = include

SRC_DIR = src/
OBJ_DIR = obj/

RM = rm -f
AR = ar rcs

SRC_FILES	= ft_printf.c    \
			  number.c       \
			  character.c    \
			  other.c        \

SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
			make -C $(LIBFT)
			cp $(LIBFT)/libft.a .
			mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJS)

$(OBJ_DIR): 
		mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:  $(SRC_DIR)%.c
				$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
		$(RM) -rf $(OBJ_DIR)
		make clean -C $(LIBFT)

fclean:	clean
			$(RM) -f $(NAME) $(OBJ_DIR)
			$(RM) -f $(LIBFT)/libft.a

re:		fclean all

.PHONY:		all clean fclean re
