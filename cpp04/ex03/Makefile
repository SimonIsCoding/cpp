# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 15:03:57 by simon             #+#    #+#              #
#    Updated: 2025/01/14 19:39:28 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Interface
RM			= rm -rf
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INCLUDES	= AMateria.hpp ICharacter.hpp
SRCS		= AMateria.cpp ICharacter.cpp main.cpp 
OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(COMP) $(FLAGS) -c $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re