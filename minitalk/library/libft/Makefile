NAME	= libft.a

CC	= gcc
CFLAG	= -Wall -Wextra -Werror 

RM	= rm -f

AR	= ar
ARFLAGS	= crs

SRCS = ft_isalpha.c  \
	   ft_putchar.c \
	   ft_isdigit.c  \
	   ft_strlen.c   \
	   ft_toupper.c  \
	   ft_isalnum.c  \
	   ft_isascii.c  \
	   ft_isprint.c  \
	   ft_tolower.c  \
	   ft_memset.c   \
	   ft_bzero.c	 \
	   ft_memcpy.c	 \
	   ft_memmove.c	 \
	   ft_strlcpy.c  \
	   ft_strlcat.c  \
	   ft_strchr.c   \
	   ft_strrchr.c	 \
	   ft_strncmp.c	 \
	   ft_memchr.c   \
	   ft_memcmp.c   \
	   ft_strnstr.c  \
	   ft_atoi.c	 \
	   ft_calloc.c	 \
	   ft_strdup.c   \
	   ft_substr.c   \
	   ft_strjoin.c  \
	   ft_strtrim.c  \
	   ft_itoa.c     \
	   ft_strmapi.c  \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr.c  \
	   ft_putendl_fd.c \
	   ft_putnbr.c  \
	   ft_split.c      \

SRCS_BONUS = ft_lstnew.c \
			 ft_lstadd_front.c \
			 ft_lstsize.c \
			 ft_lstlast.c \
			 ft_lstadd_back.c \
			 ft_lstdelone.c   \
			 ft_lstclear.c    \
			 ft_lstiter.c     \
			 ft_lstmap.c      \

ifdef WITH_BONUS
	OBJECTS = $(OBJS) $(OBJS_BONUS)
else
	OBJECTS = $(OBJS)
endif
	      
OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)

clean :
	@$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

$(NAME) : $(OBJECTS)
	@$(AR) $(ARFLAGS) $@ $^

bonus :
	@make WITH_BONUS=1 all
%.o : %.c
	@$(CC) $(CFLAG) -c $< -o $@

.PHONY : all clean fclean re
