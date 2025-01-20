# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 15:03:57 by simon             #+#    #+#              #
#    Updated: 2025/01/20 15:32:59 by simarcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= exo03
RM			= rm -rf
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

INCLUDE_DIR		= ./includes/
INCLUDE_FLAG	= -I$(INCLUDE_DIR)
INCLUDE_FILES	= AMateria.hpp \
				Character.hpp \
				Cure.hpp \
				Ice.hpp \
				ICharacter.hpp \
				IMateriaSource.hpp \
				MateriaSource.hpp
INCLUDES		= $(addprefix $(INCLUDE_DIR), $(INCLUDE_FILES))

SRCS_DIR	= ./srcs/
SRCS_FILES	= main.cpp \
			AMateria.cpp \
 			Character.cpp \
 			Cure.cpp \
 			Ice.cpp \
 			MateriaSource.cpp
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(COMP) $(FLAGS) $(INCLUDE_FLAG) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
			$(COMP) $(FLAGS) $(INCLUDE_FLAG) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
