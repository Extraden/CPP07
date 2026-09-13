NAME = array

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp
INCLUDES = Array.hpp

all: $(NAME)

$(NAME): $(SRCS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
