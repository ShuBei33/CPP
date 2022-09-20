/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:12:24 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/02 23:08:56 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

Zombie	*newZombie(String name) {
	
	Zombie	*undead = new Zombie;

	undead->setName(name);
	undead->announce();
	return (undead);
}