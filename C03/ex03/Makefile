# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 19:12:40 by gleal             #+#    #+#              #
#    Updated: 2022/04/17 19:12:41 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -Wshadow
NAME=diamondtrap
SRCS=ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \
		main.cpp
DEPS=ClapTrap.hpp \
		ScavTrap.hpp \
		FragTrap.hpp \
		DiamondTrap.hpp
all: $(NAME)
$(NAME): $(SRCS) $(DEPS) Makefile
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
clean:
	$(RM) -r *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re