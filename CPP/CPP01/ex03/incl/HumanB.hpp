/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:40:23 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/09 04:05:50 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

	public:
		HumanB(String name);
		~HumanB(void);

		void	setWeapon(Weapon &weapon);
		void	attack(void);

	private:
		String	_Name;
		Weapon	*_Weapon;

};

#endif
