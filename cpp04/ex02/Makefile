# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 15:47:54 by simon             #+#    #+#              #
#    Updated: 2025/01/20 16:36:13 by simarcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Abstract_class
RM			= rm -rf
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INCLUDES	= AAnimal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
SRCS		= AAnimal.cpp Dog.cpp Cat.cpp main.cpp WrongCat.cpp WrongAnimal.cpp \
			Brain.cpp
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

.PHONY:		all fclean clean re
