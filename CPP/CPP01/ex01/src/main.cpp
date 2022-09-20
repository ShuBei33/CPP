/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:44:19 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/05 21:28:56 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

int	main(void) {

	Zombie	*Grgr;

	Grgr = zombieHorde(5, "Babybel");
	delete [] Grgr;
	return (0);
}