/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:38:26 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 17:15:18 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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
# include <exception>
# include <cstdlib>

typedef	std::string		String;
typedef	unsigned int	uint;

template<typename T, typename U>
void	iter(T* tab, size_t len, U (*f)(T&)) {

	size_t	i = 0;
	while (i < len) {
		f(tab[i++]);
	}
}

template<typename T, typename U>
void iter(T const * tab, size_t len, U (*f)(T const &)) {

	size_t	i = 0;
	while (i < len) {
		f(tab[i++]);
	}
}

#endif