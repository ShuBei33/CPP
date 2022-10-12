# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/15 19:37:02 by parallels         #+#    #+#              #
#    Updated: 2022/10/04 19:02:14 by estoffel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Iter

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -Iincl -g -std=c++98

SRC		=	main.cpp	\

RM		=	rm -rf

OBJ		:=	$(SRC:%.cpp=%.o)

DEP		=	$(OBJ:%.o=%.d)

all: $(NAME)

-include $(DEP)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "\n"
	@printf "\n"
	@printf "\n"
	@printf "\n"
	@echo "🌼\033[1;97m I T E R  C R E A T E D  W I T H  S U C C E S S 🌼\e[0m"
	@printf "\n"
	@echo "			    x"
	@printf "\n"
	@echo "		✨	~ \033[1;97mEnora\e[0m ~	✨"
	@printf "\n"
	@printf "\n"

clean:
	$(RM) obj/
	@printf "\n"
	@echo "💧\033[1;97m E V E R Y T H I N G  I S  C L E A N E D 💧\e[0m"
	@printf "\n"

fclean:
	$(RM) *.o
	$(RM) main.d
	$(RM) $(NAME)
	@printf "\n"
	@echo "💧\033[1;97m E V E R Y T H I N G  I S  C L E A N E D 💧\e[0m"
	@printf "\n"

re: fclean all

.PHONY: all clean fclean re