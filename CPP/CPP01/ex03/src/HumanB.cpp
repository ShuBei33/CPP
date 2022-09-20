/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:40:06 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/09 04:27:15 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"
#include "../incl/HumanB.hpp"
#include "../incl/Weapon.hpp"

HumanB::HumanB(String name): _Name(name), _Weapon(NULL) {

	std::cout << BLUE "🐍 Constructor HumanB called" END << std::endl;
}

HumanB::~HumanB(void) {

	std::cout << RED "💥 Destructor HumanB called" END << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {this->_Weapon = &weapon;}

void	HumanB::attack() {

	if (this->_Weapon == NULL)
		std::cout << "😓" << this->_Name << " doesn't have a weapon" << std::endl;
	else
		std::cout << "🏹 " << this->_Name << " attacks with " << this->_Weapon->getType() << std::endl;
}
