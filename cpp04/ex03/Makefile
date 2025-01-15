# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 15:03:57 by simon             #+#    #+#              #
#    Updated: 2025/01/15 19:58:36 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Interface
RM			= rm -rf
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDE_DIR	= ./includes/
INCLUDE_FLAG= $(addprefix -I, $(INCLUDE_DIR))
INCLUDES	= $(INCLUDE_DIR)!AMateria.hpp \
			Character.hpp \
			Cure.hpp \
			Ice.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp

SRCS		= ./srcs/AMateria.cpp \
			./srcs/Character.cpp \
			./srcs/Cure.cpp \
			./srcs/Ice.cpp \
			./srcs/ICharacter.cpp \
			./srcs/IMateriaSource.cpp \
			./srcs/MateriaSource.cpp \
			main.cpp

OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDE_FLAG) $(OBJS)
			$(COMP) $(FLAGS) -c $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDE_FLAG)
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re