# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 12:02:27 by simon             #+#    #+#              #
#    Updated: 2024/12/12 12:16:22 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Harl_2.0
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

INCLUDE		= Harl.hpp

SRCS		= Harl.cpp \
			main.cpp

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