/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:26:37 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 08:49:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

Dog::Dog(void): Animal("Dog"), _Brain(new Brain) {

	std::cout << BLUE "🐍 Constructor " BWHITE "Dog" BLUE " called" END << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy._Type), _Brain(new Brain(*cpy._Brain)) {

	std::cout << TURQ "🐍🐍 Copy Constructor Dog called" END << std::endl;
}

Dog&	Dog::operator=(const Dog &asgn) {

	std::cout << GREEN "🦕 Copy assignement Dog called" END << std::endl;
	_Type = asgn._Type;
	*(_Brain) = *(asgn._Brain); //copie profonde grace a l'utilisation de *()
	return (*this);
}

Dog::~Dog(void) {

	delete _Brain;
	std::cout << RED "💥 Destructor " BWHITE "Dog" RED " called" END << std::endl;
}

void	Dog::makeSound() const {

	std::cout << "🐕 " << _Type << " noise is : Wouf wouf\n" << std::endl;
}

void	Dog::displayBrain(const uint nb) const {

	_Brain->displayIdeas(nb);
}

void	Dog::fillBrain(const uint nb) {

	_Brain->fillIdeas(nb);
}