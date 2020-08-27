# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nkuipers <nkuipers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/27 14:17:04 by nkuipers      #+#    #+#                  #
#    Updated: 2020/08/27 14:54:54 by nkuipers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Array
FILES =  main.cpp
CXX = clang++
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

#colors
GREEN	= \x1b[32;01m
WHITE	= \x1b[29;01m
RESET	= \x1b[0m


all: $(NAME)

$(NAME):
	@$(CXX) $(FILES) $(FLAGS) -o $(NAME)
	@echo "$(GREEN)Done! Title of output file is '$(NAME)'" 

clean:
	@echo "$(WHITE) Cleaning..."
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
