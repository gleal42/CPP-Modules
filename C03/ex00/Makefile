CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
NAME=claptrap
SRCS=Claptrap.cpp \
		main.cpp
DEPS=Claptrap.hpp
all: $(NAME)
$(NAME): $(SRCS) $(DEPS) Makefile
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
clean:
	$(RM) -r *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re