/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:55:31 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/05 21:22:50 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie::Zombie(void) {

	std::cout << GREEN "💉🩸 A zombie is created" END << std::endl;
}

Zombie::~Zombie(void) {

	std::cout << RED "💥 Zombie " << this->_Name << " destroyed" END << std::endl;
}

void	Zombie::setName(String name) {_Name = name;}

const String	&Zombie::getName(void) const
{
	return (this->_Name);
}

void	Zombie::announce(void) {

	std::cout << "🧟 " << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
