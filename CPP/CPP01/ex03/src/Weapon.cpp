/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:40:12 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/09 03:28:14 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"
#include "../incl/HumanB.hpp"
#include "../incl/Weapon.hpp"

Weapon::Weapon(String type): _Type(type) {

	std::cout << BLUE "🐍 Constructor Weapon called" END << std::endl;
}

Weapon::~Weapon(void) {

	std::cout << RED "💥 Destructor Weapon called" END << std::endl;
}

void	Weapon::setType(String type) {_Type = type;}

const String	&Weapon::getType(void) const
{
	return (this->_Type);
}