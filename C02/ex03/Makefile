# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 20:03:02 by gleal             #+#    #+#              #
#    Updated: 2022/04/14 00:32:16 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
NAME=bsp
SRCS=main.cpp \
	Fixed.cpp \
	Point.cpp \
	bsp.cpp
all:$(NAME)
$(NAME): $(SRCS) Fixed.hpp Point.hpp Makefile
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
clean:
	$(RM) -r *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

valgrind: vbuild vrun
vbuild:
	docker build --tag valgrind-image .
vrun:
	docker run --tty --interactive --rm --volume `pwd`:/valgrind/ --name valgrind valgrind-image
vcheck:
	docker container ls -a
	docker images
	docker volume ls
vclean:
	docker system prune -a
.PHONY: all clean fclean re