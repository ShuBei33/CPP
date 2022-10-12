/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:00:21 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 07:04:06 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"

Animal::Animal(void): _Type("Animal") {

	std::cout << BLUE "🐍 Constructor " BWHITE "Animal" BLUE " called" END << std::endl;
}

Animal::Animal(String type): _Type(type) {

	std::cout << BLUE "🐍 Constructor " BWHITE "Animal" BLUE " called" END << std::endl;
}

Animal::Animal(const Animal &cpy): _Type(cpy._Type) {

	std::cout << TURQ "🐍🐍 Copy Constructor Animal called" END << std::endl;
}

Animal&	Animal::operator=(const Animal &asgn) {

	std::cout << GREEN "🦕 Copy assignement Animal called" END << std::endl;
	this->_Type = asgn._Type;
	return (*this);
}

const String&	Animal::getType() const {

	return (this->_Type);
}

Animal::~Animal(void) {

	std::cout << RED "💥 Destructor " BWHITE "Animal" RED " called" END << std::endl;
}

void	Animal::makeSound() const {

	std::cout << "💛 " << _Type << " noise is : ...\n" << std::endl;
}
