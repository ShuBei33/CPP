/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:19:27 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:15:44 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

Cat::Cat(void): Animal("Cat") {

	std::cout << BLUE "🐍 Constructor " BWHITE "Cat" BLUE " called" END << std::endl;
}

Cat::Cat(const Cat &cpy) {*this = cpy;}

Cat&	Cat::operator=(const Cat &asgn) {

	this->_Type = asgn._Type;
	return (*this);
}

Cat::~Cat(void) {

	std::cout << RED "💥 Destructor " BWHITE "Cat" RED " called" END << std::endl;
}

void	Cat::makeSound() const {

	std::cout << "🐈 " << _Type << " noise is : Meooooow\n" << std::endl;
}
