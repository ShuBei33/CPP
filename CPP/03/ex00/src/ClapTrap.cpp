/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:10:32 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/23 17:20:54 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"

ClapTrap::ClapTrap(String name): _Name(name), _HP(10), _Nrg(10), _Atk(0) {

	std::cout << BLUE "🐍 Constructor " BWHITE << this->_Name << BLUE " called" END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {

	*this = cpy;
	std::cout << TURQ "🐍🐍 Copy Constructor called" END << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &asgn) {

	this->_Name = asgn._Name;
	this->_HP = asgn._HP;
	this->_Nrg = asgn._Nrg;
	this->_Atk = asgn._Atk;
	std::cout << GREEN "🦕 Copy assignement called" END << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void) {

	std::cout << RED "💥 Destructor " BWHITE << this->_Name << RED " called" END << std::endl;
}

void	attack(const String& target) {

	std::cout << "ClapTrap " << this->_Name << " attacks " << &target << ", causing "
	<< asgn._Atk << " points of damage!" << std::endl;
}

void	takeDamage(uint amount) {

	
}

void	beRepaired(uint amount) {

	
}
