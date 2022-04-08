# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 19:05:24 by gleal             #+#    #+#              #
#    Updated: 2022/04/08 19:25:09 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=hithisisbrain
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror
all: $(NAME)
$(NAME): main.cpp Makefile
	$(CXX) $(CXXFLAGS) main.cpp -o $(NAME)
clean:
	$(RM) -r *.o
fclean:
	$(RM) -r hithisisbrain

re: fclean all