# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 22:45:11 by gleal             #+#    #+#              #
#    Updated: 2022/04/18 00:13:49 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
NAME=polymorphism
SRCS=Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	main.cpp
DEPS=Animal.hpp \
	Dog.hpp \
	Cat.hpp
all:$(NAME)
$(NAME): $(SRCS) $(DEPS) Makefile
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
clean:
	$(RM) -r *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re