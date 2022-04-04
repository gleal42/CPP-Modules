# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 20:02:06 by gleal             #+#    #+#              #
#    Updated: 2022/04/03 20:23:59 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=tests
SRCS=Account.cpp \
	tests.cpp
all: $(NAME)
$(NAME): $(SRCS)
$(SRCS): Account.hpp Makefile
clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all