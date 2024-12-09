# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 13:05:02 by simarcha          #+#    #+#              #
#    Updated: 2024/11/29 10:46:45 by simarcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Phonebook
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDES	= phonebook.class.hpp \
			contact.class.hpp

SRCS		= phonebook.class.cpp \
			contact.class.cpp \
			main.cpp

OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)
			
re:			fclean all

.PHONY:	all fclean clean re
