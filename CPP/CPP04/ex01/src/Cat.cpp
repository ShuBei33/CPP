/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:19:27 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 09:54:18 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

Cat::Cat(void): Animal("Cat"), _Brain(new Brain) {

	std::cout << BLUE "🐍 Constructor " BWHITE "Cat" BLUE " called" END << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy._Type), _Brain(new Brain(*cpy._Brain)) {

	std::cout << TURQ "🐍🐍 Copy Constructor Cat called" END << std::endl;
}

Cat&	Cat::operator=(const Cat &asgn) {

	std::cout << GREEN "🦕 Copy assignement Cat called" END << std::endl;
	_Type = asgn._Type;
	*(_Brain) = *(asgn._Brain);
	return (*this);
}

Cat::~Cat(void) {

	delete _Brain;
	std::cout << RED "💥 Destructor " BWHITE "Cat" RED " called" END << std::endl;
}

void	Cat::makeSound() const {

	std::cout << "🐈 " << _Type << " noise is : Meooooow\n" << std::endl;
}

void	Cat::displayBrain(const uint nb) const {

	_Brain->displayIdeas(nb);
}

void	Cat::fillBrain(const uint nb) {

	_Brain->fillIdeas(nb);
}
