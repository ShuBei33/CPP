/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:10:27 by parallels         #+#    #+#             */
/*   Updated: 2022/09/25 02:41:56 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ScavTrap.hpp"
#include "../incl/FragTrap.hpp"

int	main(void) {

	ClapTrap	Babybel("Babybel");
	ClapTrap	Muimui("Muimui");
	ScavTrap	Panipuri("Panipuri");
	FragTrap	Togepi("Togepi");

	std::cout << "\n";
	Panipuri.guardGate();
	Babybel.setAtk(8);
	Babybel.attack("Muimui");
	Muimui.takeDamage(8);
	Muimui.beRepaired(5);
	Togepi.highFivesGuys();
	Muimui.setAtk(6);
	Muimui.attack("Babybel");
	Babybel.takeDamage(6);
	Babybel.beRepaired(3);
	Panipuri.attack("Babybel");
	Babybel.takeDamage(30);
	Togepi.attack("Panipuri");
	Panipuri.takeDamage(30);
	Panipuri.attack("Togepi");
	Togepi.takeDamage(30);
	std::cout <<"\n...\n";
	std::cout <<"\n.........\n";
	std::cout <<"\n.................\n";
	std::cout << "\n========== This combat has been cut because of his extreme brutality but ended with Togepi winning 👑 ==========\n";
	std::cout << "\n" << std::flush;
	return 0;
}
