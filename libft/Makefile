NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = crs

INCLUDES = ./libft.h 

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


SRCS    =   $(SRCS_1)      \
            $(SRCS_2)      \
            $(SRCS_B)      \

OBJS    = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY : all clean fclean re
