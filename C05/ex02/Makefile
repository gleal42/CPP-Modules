# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 00:33:42 by gleal             #+#    #+#              #
#    Updated: 2022/04/29 04:15:32 by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CPPFLAGS := -Iinc
NAME := execute
SRCDIR := srcs/
OBJDIR := bin/
DEPDIR := deps/
SRCS := Bureaucrat.cpp \
		Form.cpp \
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
