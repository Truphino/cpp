#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By:  <>                                        +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/03/13 14:48:40 by                   #+#    #+#             *#
#*   Updated: 2017/03/13 14:52:08 by                  ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

SRC = 	main.cpp		\
		Fixed.class.cpp	\
		Expr.class.cpp

NAME = eval_expr
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(SRC)
	g++ -o $(NAME) $(FLAGS) $(SRC)

fclean:
	rm $(NAME)

re: fclean all
