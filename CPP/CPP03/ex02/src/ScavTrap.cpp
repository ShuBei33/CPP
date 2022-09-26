/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 23:08:12 by parallels         #+#    #+#             */
/*   Updated: 2022/09/25 02:34:10 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ScavTrap.hpp"

ScavTrap::ScavTrap(String name): ClapTrap(name, 100, 50, 30) {

	std::cout << BLUE "🐍 Constructor ScavTrap " BWHITE << this->_Name << BLUE " called" END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy) {

	*this = cpy;
	std::cout << TURQ "🐍🐍 Copy Constructor ScavTrap called" END << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& asgn) {

	ClapTrap::operator=(asgn);
	std::cout << GREEN "🦕 Copy assignement ScavTrap called" END << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void) {

	std::cout << RED "💥 Destructor ScavTrap " BWHITE << this->_Name << RED " called" END << std::endl;
}

void	ScavTrap::attack(const String& target) {

	if (_Nrg <= 0)
		std::cout << _Name << " has no more energy to attack" << std::endl;
	else if (_HP <= 0)
		std::cout << _Name << " is already dead and can't attack anymore" << std::endl;
	else {
		std::cout << RED "ScavTrap " << _Name << " 🗡  attacks 🗡  " << target << ", causing "
		<< _Atk << " points of damage!\n" END << std::endl;
		std::cout << _Name << " has " << --_Nrg << " 🔋 energy points 🔋 left" << std::endl;
	}
}

void	ScavTrap::guardGate() {

	std::cout << "🏰 " << _Name << " has entered ✨ Guate Keeper ✨ Mode\n" << std::endl;
}
