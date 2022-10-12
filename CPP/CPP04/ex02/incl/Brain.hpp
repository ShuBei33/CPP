/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 07:43:26 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 08:48:23 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

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
# include <cstdlib>
# include <iostream>

typedef	std::string		String;
typedef	unsigned int	uint;

class Brain {
	#define IDEA_NB 100
	
	public:
		Brain();
		Brain(Brain const &cpy);
		virtual ~Brain();

		Brain&	operator=(Brain const &asgn);
		
		void	fillIdeas(const uint);
		void	displayIdeas(const uint) const;
	
	protected:
		String	_Ideas[IDEA_NB];
};

#endif
