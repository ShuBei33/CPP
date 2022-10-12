/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:37:39 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 07:15:56 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {

	std::cout << BLUE "🐍 Constructor " BWHITE "WrongCat" BLUE " called" END << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy._Type) {

	std::cout << TURQ "🐍🐍 Copy Constructor WrongCat called" END << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &asgn) {

	std::cout << GREEN "🦕 Copy assignement WrongCat called" END << std::endl;
	this->_Type = asgn._Type;
	return (*this);
}

WrongCat::~WrongCat(void) {

	std::cout << RED "💥 Destructor " BWHITE "WrongCat" RED " called" END << std::endl;
}

void	WrongCat::makeSound() const {

	std::cout << "👾 " << _Type << " noise is : MzoWmZowwww\n" << std::endl;
}
