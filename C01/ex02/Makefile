# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 19:05:24 by gleal             #+#    #+#              #
#    Updated: 2022/04/08 20:36:11 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=hithisisbrain
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
all: $(NAME)
$(NAME): main.cpp Makefile
	$(CXX) $(CXXFLAGS) main.cpp -o $(NAME)
clean:
	$(RM) -r *.o
fclean: clean
	$(RM) -r hithisisbrain

re: fclean all
.PHONY: all clean fclean re