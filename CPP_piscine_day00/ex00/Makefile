NAME = 		megaphone
SRCS = 		megaphone.cpp
OBJECTS = 	$(SRCS:.cpp=.o)
FLAGS = 	-Wall -Werror -Wextra

all :$(NAME)

#colors
GREEN	= \x1b[32;01m
WHITE	= \x1b[29;01m
RESET	= \x1b[0m

$(NAME): $(OBJECTS) 

%.o: %.s
	@echo "$(WHITE)Compiling: $<"
	@clang++ $< $@ $(FLAGS)

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re