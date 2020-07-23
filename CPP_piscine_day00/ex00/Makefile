NAME = 		megaphone
SRCS = 		megaphone.cpp
OBJ = 	megaphone.o
FLAGS = 	-Wall -Werror -Wextra

#colors
GREEN	= \x1b[32;01m
WHITE	= \x1b[29;01m
RESET	= \x1b[0m

all :$(NAME)

%.o: %.c
	@echo "$(WHITE)Compiling: $<"
	@clang++ $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re