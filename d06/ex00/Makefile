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

SRC = main.cpp
NAME = convert
FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(FLAGS) $(OBJ)

all : $(NAME)

%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
