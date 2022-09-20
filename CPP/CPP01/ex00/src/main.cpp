/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:44:19 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/05 20:30:57 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

/* How to test: ./exe "name_malloc_zombie" "name_stack_zombie"
				Use valgrind, then comment delete Grgr to verifie leaks*/

int	main(int ac, char **av) {

	Zombie* Grgr;

	if (ac != 3)
		std::cerr << "🤡 You're supposed to write more than 2 names" << std::endl;
	else {
		Grgr = newZombie(av[1]);
		randomChump(av[2]);
		delete Grgr;
	}
	return (0);
}
