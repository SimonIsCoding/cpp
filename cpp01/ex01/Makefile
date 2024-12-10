# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 11:42:47 by simon             #+#    #+#              #
#    Updated: 2024/12/10 15:43:08 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM			= rm -rf
NAME		= Moar_brainz!

INCLUDE		= Zombie.hpp

SRCS		= main.cpp \
			Zombie.cpp \
			zombieHorde.cpp

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

re:			clean all

PHONY:		clean fclean re all
 