/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 07:44:05 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 08:28:43 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void) {

	switch (rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			return NULL;
	}
}

void	identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
			std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
			std::cout << "C" << std::endl;
	else
		std::cout << "Type not found\n";
}

void	identify(Base& p) {

	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	std::cout << "Type not found\n";
}

Base::~Base(void) {

	std::cout << RED "💥 Destructor Base called" END << std::endl;
}