# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 22:45:11 by gleal             #+#    #+#              #
#    Updated: 2022/04/19 01:06:34 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -Wshadow -g
NAME=animalbrain
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

valgrind: vbuild vrun

vbuild: | Dockerfile
	docker build --tag valgrind-image .
Dockerfile:
	@echo "FROM ubuntu:latest\n\nRUN apt-get update\nRUN apt-get upgrade -y\nRUN apt-get install make clang gcc valgrind -y\n\nWORKDIR /valgrind" > Dockerfile
vrun:
	docker run --tty --interactive --rm --volume `pwd`:/valgrind/ --name valgrind valgrind-image
vcheck:
	docker container ls -a
	docker images
	docker volume ls
vclean:
	docker system prune -a

.PHONY: all clean fclean re valgrind vbuild vrun vcheck vclean