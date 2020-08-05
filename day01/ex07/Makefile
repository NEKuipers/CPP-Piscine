# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nkuipers <nkuipers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/05 17:08:12 by nkuipers      #+#    #+#                  #
#    Updated: 2020/08/05 17:08:32 by nkuipers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = 	replace
FILES = main.cpp
CXX = clang++
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98
#colors
GREEN	= \x1b[32;01m
WHITE	= \x1b[29;01m
RESET	= \x1b[0m


all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)
	@echo "$(GREEN)Done!"

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
