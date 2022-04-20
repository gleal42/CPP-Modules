# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 22:45:11 by gleal             #+#    #+#              #
#    Updated: 2022/04/20 18:56:05 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -Wshadow -g
NAME=abstractclass
SRCS=Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	main.cpp
DEPS=Animal.hpp \
	Dog.hpp \
	Cat.hpp \
	Brain.hpp
all:$(NAME)
$(NAME): $(SRCS) $(DEPS) Makefile
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
clean:
	$(RM) -r *.o
	$(RM) -r $(NAME).dSYM
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re