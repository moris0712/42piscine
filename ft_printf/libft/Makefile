NAME = libft.a

INCLUDES    =   ../include
SRCS_DIR    =   src/
OBJS_DIR    =   obj/

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I

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

SRCS_1 =  ft_strlen.c      \
		  ft_strlcpy.c     \
		  ft_strlcat.c     \
		  ft_strchr.c      \
		  ft_strnstr.c     \
		  ft_strncmp.c     \
		  ft_strdup.c      \
		  ft_strrchr.c     \
		  ft_memset.c      \
		  ft_memcpy.c      \
		  ft_memmove.c     \
		  ft_memchr.c      \
		  ft_memcmp.c      \
		  ft_bzero.c       \
		  ft_atoi.c        \
		  ft_calloc.c      \
		  ft_isalnum.c     \
		  ft_isalpha.c     \
		  ft_isascii.c     \
		  ft_isdigit.c     \
		  ft_isprint.c     \
		  ft_strdup.c      \
		  ft_tolower.c     \
		  ft_toupper.c     \
			
SRCS_2 =  ft_substr.c      \
		  ft_strjoin.c     \
		  ft_strtrim.c     \
		  ft_split.c       \
		  ft_itoa.c        \
		  ft_strmapi.c     \
		  ft_striteri.c    \
		  ft_putchar_fd.c  \
		  ft_putstr_fd.c   \
		  ft_putendl_fd.c  \
		  ft_putnbr_fd.c   \

SRCS_B =  ft_lstnew.c       \
		  ft_lstadd_front.c \
		  ft_lstsize.c      \
		  ft_lstlast.c      \
		  ft_lstadd_back.c  \
		  ft_lstdelone.c    \
		  ft_lstclear.c     \
		  ft_lstiter.c      \
		  ft_lstmap.c       \

SRCS        +=   $(addprefix $(SRCS_DIR), $(SRCS_1))
SRCS        +=   $(addprefix $(SRCS_DIR), $(SRCS_2))
SRCS        +=   $(addprefix $(SRCS_DIR), $(SRCS_B))

OBJS        +=   $(addprefix $(OBJS_DIR), $(SRCS_1:.c=.o))
OBJS        +=   $(addprefix $(OBJS_DIR), $(SRCS_2:.c=.o))
OBJS        +=   $(addprefix $(OBJS_DIR), $(SRCS_B:.c=.o))


OBJSF       =   .cache_exists


all : $(NAME)

$(NAME):    $(OBJS)
				@$(AR) $(NAME) $(OBJS)
				@ranlib $(NAME)
				@echo "$(GREEN)Libft compiled!$(DEF_COLOR)"


$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
				@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
				@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
				@mkdir -p $(OBJS_DIR)

clean :
			@$(RM) -rf $(OBJS_DIR)
			@$(RM) -f $(OBJSF)
			@echo "$(BLUE)libft objects files cleaned!$(DEF_COLOR)"

fclean : clean
	$(RM) $(NAME)
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re : fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

bonus : $(OBJS)
	$(AR) $(NAME) $^

.PHONY : all clean fclean re
