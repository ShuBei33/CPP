/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:40:00 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/09 04:09:59 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"
#include "../incl/HumanB.hpp"
#include "../incl/Weapon.hpp"

HumanA::HumanA(String name, Weapon &weapon): _Name(name), _Weapon(weapon) {

	std::cout << BLUE "🐍 Constructor HumanA called" END << std::endl;
}

HumanA::~HumanA(void) {

	std::cout << RED "💥 Destructor HumanA called" END << std::endl;
}

void	HumanA::attack() {

	std::cout << "🪓 " << this->_Name << " attacks with " << this->_Weapon.getType() << std::endl;
}