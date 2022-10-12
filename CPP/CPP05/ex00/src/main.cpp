/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:24:10 by parallels         #+#    #+#             */
/*   Updated: 2022/10/03 12:04:30 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"

int	main() {

	Bureaucrat	bob;

	//too high to create
	try
	{
		Bureaucrat Babybel("Babybel", -15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	//too low to create
	try
	{
		Bureaucrat Muimui("Muimui", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat	Panipuri("Panipuri", 1);
	Bureaucrat	Cacaolait("Cacaolait", 150);

	//upgrade too high
	try
	{
		Panipuri.UpGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	//upgrade too low
	try
	{
		Cacaolait.DownGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	//ok
	try
	{
		Panipuri.DownGrade();
		Panipuri.DownGrade();
		Panipuri.DownGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	//ok
	try
	{
		Cacaolait.UpGrade();
		Cacaolait.UpGrade();
		Cacaolait.UpGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
