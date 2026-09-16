NAME = array

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp
INCLUDES = Array.hpp Array.tpp

all: $(NAME)

$(NAME): $(SRCS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
