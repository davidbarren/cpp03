# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 03:46:13 by dbarrene          #+#    #+#              #
#    Updated: 2024/08/05 12:35:57 by dbarrene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

COMP = c++

COMPFLAGS = -Wall -Wextra -Werror -pedantic

SRCDIR = srcs
OBJDIR = obj
SRCS = $(SRCDIR)/main.cpp\
	   $(SRCDIR)/ClapTrap.cpp\
	   $(SRCDIR)/ScavTrap.cpp\

OBJS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(COMP) $(COMPFLAGS) -c $< -o $@

$(NAME): $(OBJDIR) $(OBJS)
	@$(COMP) $(COMPFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiling $(NAME)"
	@echo "Compilation finished :)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@echo "Removing objects"
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)
fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(NAME)"
re: fclean all
	
