/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:18:55 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/05 21:24:23 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie* zombieHorde(int N, String name) {

	Zombie	*undead = new Zombie[N];

	for (int i = 0; i < N; i++) {
		undead[i].setName(name);
		undead[i].announce();
	}
	return (undead);
}
