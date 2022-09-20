/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:40:19 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/09 04:05:32 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

	public:
		HumanA(String name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);


	private:
		String	_Name;
		Weapon	&_Weapon;
};

#endif

