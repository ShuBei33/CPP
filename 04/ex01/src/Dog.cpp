/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:26:37 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:04:52 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

Dog::Dog(void): Animal("Dog") {

	std::cout << BLUE "🐍 Constructor " BWHITE "Dog" BLUE " called" END << std::endl;
}

Dog::Dog(const Dog &cpy) {*this = cpy;}

Dog&	Dog::operator=(const Dog &asgn) {

	this->_Type = asgn._Type;
	return (*this);
}

Dog::~Dog(void) {

	std::cout << RED "💥 Destructor " BWHITE "Dog" RED " called" END << std::endl;
}

void	Dog::makeSound() const {

	std::cout << "🐕 " << _Type << " noise is : Wouf wouf\n" << std::endl;
}
