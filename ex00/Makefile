# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 09:25:52 by zramahaz          #+#    #+#              #
#    Updated: 2025/02/05 09:25:53 by zramahaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : megaphone.o
	$(CXX) $(CXXFLAGS ) -o $(NAME) megaphone.o

megaphone.o : megaphone.cpp
	$(CXX) $(CXXFLAGS) -c megaphone.cpp -o megaphone.o

clean :
	rm -f megaphone.o

fclean : clean
	rm -f $(NAME)

re : fclean all
