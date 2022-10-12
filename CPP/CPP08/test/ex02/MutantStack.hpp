/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:25:32 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/05 03:56:19 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
# include <stack>
# include <algorithm>

typedef	std::string		String;
typedef	unsigned int	uint;

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack<T>& cpy) { *this = cpy; }
		MutantStack<T>& operator=(const MutantStack<T>& asgn)
		{
			this->c = asgn.c;
			return *this;
		}
		virtual ~MutantStack() {}

		typedef	typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		typedef typename container_type::const_iterator const_iterator;
		typedef typename container_type::reverse_iterator reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;

		iterator				begin() { return this->c.begin(); }
		iterator				end() { return this->c.end(); }
		const_iterator			begin() const { return (this->c.begin()); }
		const_iterator			end() const { return (this->c.end()); }
		reverse_iterator		rbegin() { return (this->c.rbegin()); }
		reverse_iterator		rend() { return (this->c.rend()); }
		const_reverse_iterator	rbegin() const { return (this->c.rbegin()); }
		const_reverse_iterator	rend() const { return (this->c.rend()); }
};

#endif