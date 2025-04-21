# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:13:38 by lmaume            #+#    #+#              #
#    Updated: 2025/03/14 16:46:37 by lmaume           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRCS =	main.cpp	\

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)
	
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
