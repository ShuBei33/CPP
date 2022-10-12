/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:26:37 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 07:09:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

Dog::Dog(void): Animal("Dog") {

	std::cout << BLUE "🐍 Constructor " BWHITE "Dog" BLUE " called" END << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy._Type) {

	std::cout << TURQ "🐍🐍 Copy Constructor Dog called" END << std::endl;
}

Dog&	Dog::operator=(const Dog &asgn) {

	std::cout << GREEN "🦕 Copy assignement Dog called" END << std::endl;
	this->_Type = asgn._Type;
	return (*this);
}

Dog::~Dog(void) {

	std::cout << RED "💥 Destructor " BWHITE "Dog" RED " called" END << std::endl;
}

void	Dog::makeSound() const {

	std::cout << "🐕 " << _Type << " noise is : Wouf wouf\n" << std::endl;
}
