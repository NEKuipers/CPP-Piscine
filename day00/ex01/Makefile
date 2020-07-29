# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nkuipers <nkuipers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/29 08:52:20 by nkuipers      #+#    #+#                  #
#    Updated: 2020/07/29 13:07:45 by nkuipers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = 		phonebook
SRCS = 		main.cpp 
FLAGS =		-Wall -Werror -Wextra -pedantic-errors -std=c++98
INCLUDES = 	phonebook.hpp

#colors
GREEN	= \x1b[32;01m
WHITE	= \x1b[29;01m
RESET	= \x1b[0m

all :$(NAME)

$(NAME):
	@clang++ -o $(NAME) $(SRCS)
	@echo "$(GREEN)Done!"

clean:

fclean:	clean
	@rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
