/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:00:54 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/05 03:05:39 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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
# include <limits>

typedef	std::string							String;
typedef	unsigned int						uint;
typedef std::vector<int>::const_iterator	VectIter;

class Span {

	public:
		Span(const uint);
		Span(const Span& cpy);
		Span& operator= (const Span& asgn);
		virtual ~Span();

		void	addNumber(const int n);
		uint	shortestSpan() const;
		uint	longestSpan() const;
	
		template<typename T>void	addRange(typename T::iterator, typename T::iterator);

	private:
		Span();
		uint				_N;
		std::vector<int>	_data;
	
		class ReachedMaxException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};

		class NotFoundException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};
};

template<typename T>
void	Span::addRange(typename T::iterator start, typename T::iterator end) {

	typename T::iterator	it;
	
	it = start;
	while (it != end) {
		addNumber(*it);
		++it;
	}
}

#endif