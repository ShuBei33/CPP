/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:24:10 by parallels         #+#    #+#             */
/*   Updated: 2022/10/03 12:54:33 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"

int	main(void)
{
	srand(time(NULL));

	// Check that Form is abstract
	// (should not compile)
	// Form	itWontWork;

	{
		//==========    SHRUBBERY TEST    ==========

		ShrubberyCreationForm	Shrub("lol");
		Bureaucrat				Panipuri("Panipuri le jardinier", 140);
		Bureaucrat				Bob("Le depressif", 1);

		std::cout << Shrub << std::endl;

		// Grade is high enough to sign, but too low to execute
		try
		{
			Panipuri.signForm(Shrub);
			Panipuri.executeForm(Shrub);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		// Grade is high enough to sign and execute, but Form is not signed yet
		try
		{
			Bob.executeForm(Shrub);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{
		//==========    ROBOTOMIZE TEST    ==========

		RobotomyRequestForm		robot("lol");
		Bureaucrat				Panipuri("Panipuri le jardinier", 72);
		Bureaucrat				Bob("Le depressif", 1);

		std::cout << robot << std::endl;

		// Grade is high enough to sign, but too low to execute
		try
		{
			Panipuri.signForm(robot);
			Panipuri.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		// Grade is high enough to sign and execute, but Form is not signed yet
		try
		{
			// Check the randomizing
			for (int i = 0 ; i < 21 ; ++i)
				Bob.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{

		//==========   PRESIDENTIAL TEST   ==========

		PresidentialPardonForm	pres("lol");
		Bureaucrat				Panipuri("Panipuri le jardinier", 21);
		Bureaucrat				Bob("Le depressif", 1);

		std::cout << pres << std::endl;

		// Grade is high enough to sign, but too low to execute
		try
		{
			Panipuri.signForm(pres);
			Panipuri.executeForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		// Grade is high enough to sign and execute, but Form is not signed yet
		try
		{
			Bob.executeForm(pres);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
