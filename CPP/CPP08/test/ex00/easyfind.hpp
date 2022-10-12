/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:28:31 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 22:50:34 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

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
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <exception>
# include <cstdlib>

typedef	std::string		String;
typedef	unsigned int	uint;

template<typename T>
typename T::iterator	easyfind(T& a, int	b) {

	typename T::iterator res = std::find(a.begin(), a.end(), b);
	if (res == a.end())
		throw std::bad_exception();
	return res;
}

#endif