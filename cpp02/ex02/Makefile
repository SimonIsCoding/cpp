# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 17:21:26 by simon             #+#    #+#              #
#    Updated: 2024/12/21 17:26:38 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= Now_we’re_talking
RM			= rm -rf
INCLUDE		= Fixed.hpp
SRCS		= Fixed.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDE) $(OBJS)
			$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDE)
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all fclean clean re