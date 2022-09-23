/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:01:26 by parallels         #+#    #+#             */
/*   Updated: 2022/09/23 17:04:40 by estoffel         ###   ########.fr       */
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

		void		attack(const String& target);
		void		takeDamage(uint amount);
		void		beRepaired(uint amount);

	private:
		String		_Name;
		uint		_HP;
		uint		_Nrg;
		uint		_Atk;

};

#endif