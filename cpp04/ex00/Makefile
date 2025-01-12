# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 15:47:54 by simon             #+#    #+#              #
#    Updated: 2025/01/12 15:58:08 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Polymorphism
RM			= rm -rf
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INCLUDES	= Animal.hpp Dog.hpp Cat.hpp
SRCS		= Animal.cpp Dog.cpp Cat.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all fclean clean re