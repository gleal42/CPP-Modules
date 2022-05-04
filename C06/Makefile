# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 20:51:10 by gleal             #+#    #+#              #
#    Updated: 2022/05/04 20:51:44 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
NAME := convert
SRCS := Convert.cpp \
		main.cpp
INC :=  Convert.hpp
OBJS := $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@
%.o: %.cpp $(INC) Makefile
	$(CXX) $(CXXFLAGS) $< -c -o $@
clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re