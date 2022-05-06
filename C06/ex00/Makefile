# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 20:51:10 by gleal             #+#    #+#              #
#    Updated: 2022/05/06 01:20:07 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -g
CPPFLAGS := -Iinc
NAME := convert
SRCDIR := srcs/
OBJDIR := bin/
DEPDIR := deps/
SRCS := Convert.cpp \
		main.cpp
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
