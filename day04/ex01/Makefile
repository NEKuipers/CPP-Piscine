# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nkuipers <nkuipers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/20 10:39:19 by nkuipers      #+#    #+#                  #
#    Updated: 2020/08/20 14:29:21 by nkuipers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME =  Fallout
FILES = main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp \
		Supermutant.cpp RadScorpion.cpp Character.cpp
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
