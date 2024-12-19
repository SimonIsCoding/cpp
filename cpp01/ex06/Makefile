# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 14:03:09 by simon             #+#    #+#              #
#    Updated: 2024/12/19 14:26:14 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= harlFilter
RM			= rm -rf
SRCS		= main.cpp Harl.cpp
INCLUDE		= Harl.hpp
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

.PHONY:		all clean fclean re