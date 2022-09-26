/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:10:27 by parallels         #+#    #+#             */
/*   Updated: 2022/09/25 01:43:10 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"

int	main(void) {

	ClapTrap	Babybel("Babybel");
	ClapTrap	Muimui("Muimui");

	std::cout << "\n";
	Babybel.setAtk(8);
	Babybel.attack("Muimui");
	Muimui.takeDamage(8);
	Muimui.beRepaired(5);
	Muimui.setAtk(6);
	Muimui.attack("Babybel");
	Babybel.takeDamage(6);
	Babybel.beRepaired(3);
	Babybel.attack("Muimui");
	Muimui.takeDamage(8);
	std::cout << "\n" << std::flush;
	return 0;
}
