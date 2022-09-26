/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:37:44 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:12:00 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _Type("WrongAnimal") {

	std::cout << BLUE "🐍 Constructor " BWHITE "WrongAnimal" BLUE " called" END << std::endl;
}

WrongAnimal::WrongAnimal(String type): _Type(type) {

	std::cout << BLUE "🐍 Constructor " BWHITE "WrongAnimal" BLUE " called" END << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {*this = cpy;}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &asgn) {

	this->_Type = asgn._Type;
	return (*this);
}

const String&	WrongAnimal::getType() const {

	return (this->_Type);
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << RED "💥 Destructor " BWHITE "WrongAnimal" RED " called" END << std::endl;
}

void	WrongAnimal::makeSound() const {

	std::cout << "💜 " << _Type << " noise is : UNKNOWN\n" << std::endl;
}
