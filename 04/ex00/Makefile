# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/15 19:37:02 by parallels         #+#    #+#              #
#    Updated: 2022/09/26 07:19:37 by estoffel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Polymorphism

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -g -MMD -MP -std=c++98

INCL	=	incl/Animal.hpp		\
			incl/Cat.hpp		\
			incl/Dog.hpp		\
			incl/WrongAnimal.hpp\
			incl/WrongCat.hpp	\

SRC		=	Animal.cpp			\
			Cat.cpp				\
			Dog.cpp				\
			main.cpp			\
			WrongAnimal.cpp		\
			WrongCat.cpp		\

OBJ		:=	$(addprefix ./obj/,$(SRC:%.cpp=%.o))

DEP		=	$(addprefix ./obj/,$(OBJ:%.o=%.d))

RM		=	rm -rf

all: $(NAME)

-include $(DEP)

./obj/%.o: ./src/%.cpp
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ) $(INCL)
	$(CC) $(FLAGS) -I incl -o $(NAME) $(OBJ)
	@printf "\n"
	@printf "\n"
	@echo "🌼\033[1;97m L I N E W O R K  C R E A T E D  W I T H  S U C C E S S 🌼\e[0m"
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
	$(RM) obj/
	$(RM) $(NAME)
	@printf "\n"
	@echo "💧\033[1;97m E V E R Y T H I N G  I S  C L E A N E D 💧\e[0m"
	@printf "\n"

re: fclean all

.PHONY: all clean fclean re