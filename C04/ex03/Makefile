# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 20:56:35 by gleal             #+#    #+#              #
#    Updated: 2022/04/24 22:55:25 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
CPPFLAGS = -Iinc
NAME := interfacenrecap
SRCS := AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		main.cpp \
		MateriaSource.cpp
INC := AMateria.hpp \
		Character.hpp \
		Cure.hpp \
		Ice.hpp \
		ICharacter.hpp \
		IMateriaSource.hpp \
		interface.hpp \
		MateriaSource.hpp
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