/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:57:50 by parallels         #+#    #+#             */
/*   Updated: 2022/09/25 02:27:17 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "../incl/ClapTrap.hpp"

# include <string>
# include <iostream>

typedef	std::string		String;
typedef	unsigned int	uint;

class ScavTrap: public ClapTrap {

	public:
		ScavTrap(String name);
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap(void);

		ScavTrap&	operator=(const ScavTrap& asgn);

		void		setAtk(uint);

		void		attack(const String& target);
		void		guardGate();
};

#endif
