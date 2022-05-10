NAME	= minishell

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

SRCS	=	

OBJS	= $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -I.

$(NAME) : $(OBJS)

all : $(NAME)
	@cd libft && make all
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@cd libft && make clean
	@$(RM) $(OBJ) 

fclean: clean
	@cd libft && make fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re