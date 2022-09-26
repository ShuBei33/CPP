/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:10:32 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/25 16:58:11 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"

ClapTrap::ClapTrap(String name): _Name(name), _HP(10), _Nrg(10), _Atk(0) {

	std::cout << BLUE "🐍 Constructor ClapTrap " BWHITE << this->_Name << BLUE " called" END << std::endl;
}

ClapTrap::ClapTrap(String name, int _HP, uint _Nrg, uint _Atk): _Name(name), _HP(_HP), _Nrg(_Nrg), _Atk(_Atk) {

	std::cout << BLUE "🐍 Constructor ClapTrap " BWHITE << this->_Name << BLUE " called" END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {

	*this = cpy;
	std::cout << TURQ "🐍🐍 Copy Constructor ClapTrap called" END << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &asgn) {

	this->_Name = asgn._Name;
	this->_HP = asgn._HP;
	this->_Nrg = asgn._Nrg;
	this->_Atk = asgn._Atk;
	std::cout << GREEN "🦕 Copy assignement ClapTrap called" END << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void) {

	std::cout << RED "💥 Destructor ClapTrap " BWHITE << this->_Name << RED " called" END << std::endl;
}

void	ClapTrap::setAtk(uint atk) {_Atk = atk;}

void	ClapTrap::attack(const String& target) {

	if (_Nrg <= 0)
		std::cout << _Name << " has no more energy to attack" << std::endl;
	else if (_HP <= 0)
		std::cout << _Name << " is already dead and can't attack anymore" << std::endl;
	else {
		std::cout << RED "ClapTrap " << _Name << " 🗡  attacks 🗡  " << target << ", causing "
		<< _Atk << " points of damage!\n" END << std::endl;
		std::cout << _Name << " has " << --_Nrg << " 🔋 energy points 🔋 left" << std::endl;
	}
}

void	ClapTrap::takeDamage(uint amount) {

	if ((_HP -= amount) <= 0)
		std::cout << _Name << " is 💀 K.O. 💀\n" << std::endl;
	else
		std::cout << _Name << " has now " << _HP << " health points left\n" << std::endl;
}

void	ClapTrap::beRepaired(uint amount) {

	if (_Nrg <= 0)
		std::cout << _Name << " has no more ❌ energy points ❌ to get repared" << std::endl;
	else if (_HP <= 0)
		std::cout << _Name << " is already dead and can't attack anymore" << std::endl;
	else {
		_HP += amount;
		std::cout << GREEN << _Name << " used ✨ Reparation ✨ and has now " << _HP << " health points left" END << std::endl;
		std::cout << _Name << " has " << --_Nrg << " 🔋 energy points 🔋 left\n" << std::endl;
	}
}
