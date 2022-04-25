# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 18:48:14 by gleal             #+#    #+#              #
#    Updated: 2022/03/28 19:45:42by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
SRCS := Contact.cpp\
		PhoneBook.cpp
INC := $(SRCS:.cpp=.hpp)
OBJS := $(SRCS:.cpp=.o)
NAME := PhoneBook
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@
$(OBJS): $(SRCS) $(INC) Makefile
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
.SUFFIXES: .o .cpp .hpp