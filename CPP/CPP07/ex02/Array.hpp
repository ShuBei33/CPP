/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:04:58 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 18:49:01 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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

template<class T>
class Array {

	public:
		Array(): _tab(NULL), _n(0) {}
		Array(uint const n): _tab(new T[n]), _n(n) {}
		Array(const Array<T>& cpy): _tab(NULL), _n(0) { *this = cpy;}
		~Array() {
			if (_tab)
				delete [] _tab;
		}
		Array&	operator=(const Array<T>& asgn) {
			if (this != &asgn)
			{
				if (_tab)
					delete [] _tab;
				_n = asgn._n;
				_n ? _tab = new T [_n] : _tab = NULL;
				for (uint i = 0; i < asgn._n; i++)
					_tab[i] = asgn._tab[i];
			}
			return *this;
		}
		T&	operator[](const uint pos) {
			if (pos >= _n)
				throw Array::OutofRangeException();
			return _tab[pos];
		}
		class OutofRangeException : public std::exception {
			private:
				virtual const char*	what() const throw() {
					return "This position is outside of the array\n";
				}
		};
		uint	size() const {return _n;}

	private:
		T*		_tab;
		uint	_n;

};

#endif

