CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = whatever

SRCS = main.cpp
INCLUDES = whatever.hpp

all: $(NAME)
	
$(NAME): $(SRCS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:

fclean: clean
	rm -rf whatever

re: fclean all

.PHONY: all clean fclean re
