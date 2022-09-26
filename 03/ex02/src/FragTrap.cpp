/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:10:56 by parallels         #+#    #+#             */
/*   Updated: 2022/09/25 02:34:28 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/FragTrap.hpp"

FragTrap::FragTrap(String name): ClapTrap(name, 100, 100, 30) {

	std::cout << BLUE "🐍 Constructor FragTrap " BWHITE << this->_Name << BLUE " called" END << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy) {

	*this = cpy;
	std::cout << TURQ "🐍🐍 Copy Constructor FragTrap called" END << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& asgn) {

	ClapTrap::operator=(asgn);
	std::cout << GREEN "🦕 Copy assignement FragTrap called" END << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void) {

	std::cout << RED "💥 Destructor FragTrap " BWHITE << this->_Name << RED " called" END << std::endl;
}

void	FragTrap::attack(const String& target) {

	if (_Nrg <= 0)
		std::cout << _Name << " has no more energy to attack" << std::endl;
	else if (_HP <= 0)
		std::cout << _Name << " is already dead and can't attack anymore" << std::endl;
	else {
		std::cout << RED "FragTrap " << _Name << " 🗡  attacks 🗡  " << target << ", causing "
		<< _Atk << " points of damage!\n" END << std::endl;
		std::cout << _Name << " has " << --_Nrg << " 🔋 energy points 🔋 left" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void) {

	std::cout << "🙌 " << _Name << " has requested to ✨ high five ✨ everyone\n" << std::endl;
}
