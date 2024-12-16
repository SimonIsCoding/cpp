# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 12:31:33 by simon             #+#    #+#              #
#    Updated: 2024/12/16 15:33:42 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= The_Job_Of_Your_Dreams
RM			= rm -rf
SRCS		= tests.cpp Account.cpp
INCLUDE		= Account.hpp
OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	 Makefile $(INCLUDE) $(OBJS)
			$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDE)
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		clean fclean re all