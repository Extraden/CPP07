CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = whatever

SRCS = main.cpp

all: $(NAME)
	
$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:

fclean: clean
	rm -rf whatever

re: fclean all

.PHONY: all clean fclean re
