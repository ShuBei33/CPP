/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:03:59 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 17:14:59 by estoffel         ###   ########.fr       */
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

template<typename T>
void	swap(T& a, T&b) {

	T	tmp;

	tmp	= a;
	a	= b;
	b	= tmp;
}

template<typename T>
const T&	min(const T& a, const T& b) {

	return (a < b ? a : b);
}

template<typename T>
const T&	max(const T& a, const T& b) {

	return (a > b ? a : b);
}

#endif