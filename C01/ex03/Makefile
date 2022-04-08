# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 20:03:02 by gleal             #+#    #+#              #
#    Updated: 2022/04/08 20:39:26 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
NAME=unnecessaryviolence
SRCS=HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp \
	main.cpp \
	HumanB.cpp
all:$(NAME)
$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
clean:
	$(RM) -r *.o
fclean:
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re