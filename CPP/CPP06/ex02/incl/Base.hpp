/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 07:25:02 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 07:43:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

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

class Base {

	public:
		virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base*		generate(void);
void		identify(Base* p);
void 		identify(Base& p);

#endif