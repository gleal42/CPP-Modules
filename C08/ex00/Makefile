# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 19:10:28 by gleal             #+#    #+#              #
#    Updated: 2022/05/09 19:12:51 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
CPPFLAGS := -Iinc
NAME := easyfind
SRCDIR := srcs/
OBJDIR := bin/
DEPDIR := deps/
SRCS := main.cpp
OBJS := $(SRCS:.cpp=.o)
DEPS := $(SRCS:.cpp=.d)
SRCS := $(addprefix $(SRCDIR), $(SRCS))
OBJS := $(addprefix $(OBJDIR), $(OBJS))
DEPS := $(addprefix $(DEPDIR), $(DEPS))
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d

all: $(NAME)

$(DEPDIR): ; mkdir -p $@
$(OBJDIR): ; mkdir -p $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OBJS) -o $@

bin/%.o : srcs/%.cpp deps/%.d Makefile | $(OBJDIR) $(DEPDIR)
	$(CXX) $(DEPFLAGS) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

$(DEPS): Makefile
-include $(DEPS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

resetclean: fclean clean
	$(RM) -r $(OBJDIR) $(DEPDIR)

re: fclean all

.PHONY: all clean fclean resetclean re
