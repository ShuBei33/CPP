/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:19:27 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 07:07:36 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

Cat::Cat(void): Animal("Cat") {

	std::cout << BLUE "🐍 Constructor " BWHITE "Cat" BLUE " called" END << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy._Type) {

	std::cout << TURQ "🐍🐍 Copy Constructor Cat called" END << std::endl;
}

Cat&	Cat::operator=(const Cat &asgn) {

	std::cout << GREEN "🦕 Copy assignement Cat called" END << std::endl;
	this->_Type = asgn._Type;
	return (*this);
}

Cat::~Cat(void) {

	std::cout << RED "💥 Destructor " BWHITE "Cat" RED " called" END << std::endl;
}

void	Cat::makeSound() const {

	std::cout << "🐈 " << _Type << " noise is : Meooooow\n" << std::endl;
}
