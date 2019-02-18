# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: storchbu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 21:04:10 by storchbu          #+#    #+#              #
#    Updated: 2019/02/18 21:04:13 by storchbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_*.c

OUT = $(SRCS:.c=.o)

INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)

clean:
		rm -f $(OUT)

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re