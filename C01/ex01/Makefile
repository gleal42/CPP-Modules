# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 23:32:31 by gleal             #+#    #+#              #
#    Updated: 2022/04/08 20:33:38 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS:=-Wall -Wextra -Werror -std=c++98
CXX:=c++
NAME:=zombieHorde
SRCS:=main.cpp \
	Zombie.cpp \
	zombieHorde.cpp
OBJS:= $(SRCS:.cpp=.o)
all: ${NAME}
${NAME}: ${OBJS}
	$(CXX) $(CXXFLAGS) $^ -o $@
${OBJS}: ${SRCS} Zombie.hpp Makefile
clean:
	${RM} -r *.o
fclean: clean
	${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re