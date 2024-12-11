# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 13:36:58 by simon             #+#    #+#              #
#    Updated: 2024/12/11 13:47:01 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= Sed_is_for_losers
RM			= rm -rf

SRCS		= main.cpp

OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(OBJS)
			$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re