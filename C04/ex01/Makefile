# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 22:45:11 by gleal             #+#    #+#              #
#    Updated: 2022/04/24 22:50:40 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
CPPFLAGS = -Iinc
NAME := animalbrain
SRCS := Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	main.cpp
INC := Animal.hpp \
	Dog.hpp \
	Cat.hpp \
	Brain.hpp
OBJS := $(SRCS:.cpp=.o)
SRCS := $(addprefix srcs/, $(SRCS))
OBJS := $(addprefix bin/, $(OBJS))
INC := $(addprefix inc/, $(INC))
all: $(NAME)
bin:
	mkdir bin
$(NAME): $(OBJS) $(INC) Makefile
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OBJS) -o $@
bin/%.o: srcs/%.cpp | bin
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $< -c -o $@
clean:
	$(RM) bin/*.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re depend

depend: $(SRCS)
	makedepend $(CPPFLAGS) $^

# DO NOT DELETE THIS LINE -- make depend needs it