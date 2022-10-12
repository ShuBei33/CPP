/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:24:10 by parallels         #+#    #+#             */
/*   Updated: 2022/10/03 13:51:19 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"
#include "../incl/Form.hpp"

int main() {

	Bureaucrat president("Muimui le Boss", 1);
	Bureaucrat noob("le ptit nouveau", 148);

	// Instanciation with grade to sign too low
	try
	{
		Form	gradeToSignTooLow("pouic", 2147483647, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// Instanciation with grade to sign too high
	try
	{
		Form	gradeToSignTooHigh("pouic", -2147483648, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// Instanciation with grade to execute too low
	try
	{
		Form	gradeToExecuteTooLow("pouic", 3, 2147483647);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// Instanciation with grade to execute too high
	try
	{
		Form	gradeToExecuteTooHigh("pouic", 3, -2147483648);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// Valid instanciation
	Form a("quadrillerLaZone", 5, 2);
	Form quadrillerLaZone(a);

	std::cout << '\n' << quadrillerLaZone << std::endl;

	// Bureaucrat's grade is too low to sign form
	try
	{
		quadrillerLaZone.beSigned(noob);
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << END "\n\n";
		try
		{
			noob.signForm(quadrillerLaZone);
			std::cout << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << RED "ERROR: "<< e.what() << END "\n";
		}
	}

	// Bureaucrat's grade is high enough to sign form
	try
	{
		quadrillerLaZone.beSigned(president);
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << END "\n\n";
		try
		{
			president.signForm(quadrillerLaZone);
			std::cout << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << RED "ERROR: "<< e.what() << END "\n";
		}
	}
	
	std::cout << quadrillerLaZone << std::endl;
}
