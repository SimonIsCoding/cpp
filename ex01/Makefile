# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 13:05:02 by simarcha          #+#    #+#              #
#    Updated: 2024/11/26 19:08:41 by simarcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Phonebook
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDES	= phonebook.class.hpp \
			contact.class.hpp

SRCS		= phonebook.class.cpp \
			contact.class.cpp \
			prompt.cpp \
			main.cpp

#Rules
all:		$(NAME)

%.o:		
			g++ $(CPPFLAGS) $(SRCS) -c $< -o $@

$(NAME):	Makefile $(INCLUDES)
			g++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)
			
re:			fclean all

.PHONY:	all fclean clean re
			