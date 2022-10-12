/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:37:34 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 22:55:22 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main() {

	std::vector<int>	vect;
	std::vector<int>::iterator	res;

	vect.push_back(10);
	vect.push_back(15);
	vect.push_back(20);
	vect.push_back(14);
	vect.push_back(40);

	try
	{
		res = easyfind(vect, 42);
		std::cout << *res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not found" << std::endl;
	}
	return 0;
}