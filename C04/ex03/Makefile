# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 20:56:35 by gleal             #+#    #+#              #
#    Updated: 2022/04/21 16:41:49 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g
NAME=interfacenrecap
SRC_DIR := srcs
SRCS := $(SRC_DIR)/AMateria.cpp \
		$(SRC_DIR)/Character.cpp \
		$(SRC_DIR)/Cure.cpp \
		$(SRC_DIR)/Ice.cpp \
		$(SRC_DIR)/main.cpp \
		$(SRC_DIR)/MateriaSource.cpp
INC_DIR := include
INC := $(INC_DIR)/AMateria.hpp \
		$(INC_DIR)/Character.hpp \
		$(INC_DIR)/Cure.hpp \
		$(INC_DIR)/Ice.hpp \
		$(INC_DIR)/ICharacter.hpp \
		$(INC_DIR)/IMateriaSource.hpp \
		$(INC_DIR)/interface.hpp \
		$(INC_DIR)/MateriaSource.hpp
all:$(NAME)
$(NAME): $(SRCS) $(INC) Makefile
	$(CXX) $(CXXFLAGS) -I $(INC_DIR) $(SRCS) -o $@
clean:
	$(RM) -r *.o
	$(RM) -r $(NAME).dSYM
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re