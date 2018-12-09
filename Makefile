# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: storchbu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/09 19:12:35 by storchbu          #+#    #+#              #
#    Updated: 2018/12/09 19:45:14 by storchbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_*.c

OUT = ft_*.o

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