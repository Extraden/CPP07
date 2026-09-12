CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

NAME = whatever

SRCS = main.cpp
DEPS = main.d

all: $(NAME)
	
$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf main.o

fclean: clean
	rm -rf whatever

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
