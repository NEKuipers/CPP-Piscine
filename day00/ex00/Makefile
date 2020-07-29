# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nkuipers <nkuipers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/29 08:48:51 by nkuipers      #+#    #+#                  #
#    Updated: 2020/07/29 09:00:21 by nkuipers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = 		megaphone
SRCS = 		megaphone.cpp
OBJ = 		$(SRCS:.cpp=.o)
FLAGS = 	-Wall -Werror -Wextra -pedantic-errors -std=c++98

#colors
GREEN	= \x1b[32;01m
WHITE	= \x1b[29;01m
RESET	= \x1b[0m

all :$(NAME)

%.o: %.cpp
	@echo "$(WHITE)Compiling: $<"
	@clang++ $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@clang++ -o $(NAME) $(OBJ)
	@echo "$(GREEN)Done!"

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re