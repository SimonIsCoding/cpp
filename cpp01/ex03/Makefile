# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 17:15:19 by simon             #+#    #+#              #
#    Updated: 2024/12/10 19:45:48 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= Unnecessary_violence
RM			= rm -rf

INCLUDES	= HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp

SRCS		= HumanA.cpp \
			HumanB.cpp \
			main.cpp \
			Weapon.cpp

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

PHONY:		all clean fclean re