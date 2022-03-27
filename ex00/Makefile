SHELL = /bin/sh
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
NAME := megaphone
OBJS := $(SRCS:.cpp=.o)
SRCS := megaphone.cpp

all: $(NAME)
$(NAME) : $(OBJS)
clean:
	rm -rf **/*.o
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
.SUFFIXES: .cpp .o