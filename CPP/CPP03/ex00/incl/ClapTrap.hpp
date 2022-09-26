/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:01:26 by parallels         #+#    #+#             */
/*   Updated: 2022/09/24 22:52:13 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define GREY "\033[0;30m"
# define RORED "\033[0;31m"
# define RED "\033[0;91m"
# define GREEN "\033[0;32m"
# define YELW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PINK "\033[0;35m"
# define TURQ "\033[0;36m"
# define WHITE "\033[0;97m"
# define BWHITE "\033[1;97m"
# define LWHITE "\033[4;97m"
# define IWHITE "\033[3;97m"
# define END "\e[0m"

# include <string>
# include <iostream>

typedef	std::string		String;
typedef	unsigned int	uint;

class ClapTrap {

	public:
		ClapTrap(String name);
		ClapTrap(const ClapTrap& cpy);
		~ClapTrap(void);

		ClapTrap&	operator=(const ClapTrap& asgn);

		void		setAtk(uint);

		void		attack(const String& target);
		void		takeDamage(uint amount);
		void		beRepaired(uint amount);

	private:
		String		_Name;
		int			_HP;
		uint		_Nrg;
		uint		_Atk;

};

#endif