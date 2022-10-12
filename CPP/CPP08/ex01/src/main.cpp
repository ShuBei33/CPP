/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:00:46 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/05 03:13:12 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(NULL));
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << WHITE "\n";
	}
	std::cout << "\n";

	//Test not enough number
	Span	spe = Span(1);
	try {
		std::cout << spe.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << WHITE "\n";
	}
	try {
		spe.addNumber(1);
		std::cout << spe.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << WHITE "\n";
	}

	//My Little Test with 100000 numbers
	std::vector<int>	vect;
	Span				sp2 = Span(100000);

	for (int i = 1; i <= 100000; i++)
		vect.push_back(rand());
	sp2.addRange< std::vector<int> >(vect.begin(), vect.end());

	std::cout << "shortest span \t" << sp2.shortestSpan() << std::endl;
	std::cout << "longest span  \t" << sp2.longestSpan() << std::endl;
	return 0;
}
