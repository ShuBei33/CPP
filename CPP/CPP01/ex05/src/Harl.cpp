/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:53:25 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/15 05:53:08 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Harl.hpp"

Harl::Harl(void) {

	std::cout << std::endl;
	std::cout << BLUE "🐍 Constructor Harl called" END << std::endl;
	std::cout << std::endl;
}

Harl::~Harl(void) {

	std::cout << std::endl;
	std::cout << RED "💥 Destructor Harl called" END << std::endl;
	std::cout << std::endl;
}

void	Harl::debug(void) const {

	std::cout << IWHITE "Insert some random" 
		<< WHITE " [" << BWHITE "DEBUG" << WHITE "] " 
		<< IWHITE "complaining here" << std::endl;
}

void	Harl::info(void) const {

	std::cout << IWHITE "Insert some random" 
		<< WHITE " [" << BWHITE "INFO" << WHITE "] " 
		<< IWHITE "complaining here" << std::endl;
}

void	Harl::warning(void) const {

	std::cout << IWHITE "Insert some random" 
		<< WHITE " [" << BWHITE "WARNING" << WHITE "] " 
		<< IWHITE "complaining here" << std::endl;
}

void	Harl::error(void) const {

	std::cout << IWHITE "Insert some random" 
		<< WHITE " [" << BWHITE "ERROR" << WHITE "] " 
		<< IWHITE "complaining here" << std::endl;
}

void	Harl::complain(const String level) const {

	const fct_t		f[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	(void)level;

	(this->*f[0])();
	(this->*f[1])();
	(this->*f[2])();
	(this->*f[3])();
}
