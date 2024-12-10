# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 18:23:44 by simon             #+#    #+#              #
#    Updated: 2024/12/10 11:37:41 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= BraiiiiiiinnnzzzZ
RM			= rm -rf

INCLUDES	= Zombie.hpp

SRCS		= main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp

OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
			$(CC) $(CPPFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re