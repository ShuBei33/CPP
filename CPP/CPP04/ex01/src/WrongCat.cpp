/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:37:39 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:26:03 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {

	std::cout << BLUE "🐍 Constructor " BWHITE "WrongCat" BLUE " called" END << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) {*this = cpy;}

WrongCat&	WrongCat::operator=(const WrongCat &asgn) {

	this->_Type = asgn._Type;
	return (*this);
}

WrongCat::~WrongCat(void) {

	std::cout << RED "💥 Destructor " BWHITE "WrongCat" RED " called" END << std::endl;
}

void	WrongCat::makeSound() const {

	std::cout << "👾 " << _Type << " noise is : MzoWmZowwww\n" << std::endl;
}
