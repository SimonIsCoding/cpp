# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 15:45:58 by simon             #+#    #+#              #
#    Updated: 2024/12/10 16:31:16 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
COMP	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= brain
SRCS	= main.cpp
#OBJS	= $(SRCS:.cpp=.o)

#Rules
all:	$(NAME)

$(NAME): Makefile main.o#$(OBJS)
		$(COMP) $(FLAGS) main.o -o $(NAME)

%.o:	%.cpp
		$(COMP) $(FLAGS) -c $< -o $@
		
clean:
		$(RM) main.o

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

PHONY:	all clean fclean re
