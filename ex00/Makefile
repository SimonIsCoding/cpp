# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 15:33:04 by simarcha          #+#    #+#              #
#    Updated: 2024/11/28 18:36:24 by simarcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= megaphone
COMP		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= megaphone.cpp

#Rules
all:		$(NAME)

#%.o:		megaphone.cpp
#			$(COMP) $(CPPFLAGS) -c $< -o $@

$(NAME):	Makefile
			c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re