/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:10:41 by parallels         #+#    #+#             */
/*   Updated: 2022/09/25 02:28:26 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../incl/ClapTrap.hpp"

# include <string>
# include <iostream>

typedef	std::string		String;
typedef	unsigned int	uint;

class FragTrap: public ClapTrap {

	public:
		FragTrap(String name);
		FragTrap(const FragTrap& cpy);
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap& asgn);

		void		setAtk(uint);

		void		attack(const String& target);
		void		highFivesGuys(void);
};

#endif
