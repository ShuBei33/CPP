/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:38:03 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/02 22:53:44 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/*--------- C O L O R S ---------*/

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
# define END "\e[0m"

/*------ L I B R A R I E S ------*/

# include <string>
# include <iostream>

/*-------- C L A S S E S --------*/

typedef	std::string	String;

class Zombie {

	public:
		Zombie(void);
		~Zombie(void);

		const String	&getName(void) const;

		void	setName(String name);
		void	announce(void);
		
	private:
		String	_Name;

};

/*------ O T H E R  F C T -------*/

Zombie	*newZombie(String name);
void	randomChump(String name);

#endif
