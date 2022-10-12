/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:24:10 by parallels         #+#    #+#             */
/*   Updated: 2022/10/03 13:20:23 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/Intern.hpp"

int main() {

	Intern someRandomIntern;
	Intern	sisi;
	someRandomIntern = sisi;
	Form* rrf;

	// Making valid Form (Robotomy)
	try
	{
		rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << WHITE"\n";
	}
	delete rrf;

	// Making valid Form (Presidential)
	try
	{
		rrf = someRandomIntern.makeForm("Presidential pardon", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << WHITE "\n";
	}
	delete rrf;

	// Making invalid Form
	try
	{
		rrf = someRandomIntern.makeForm("blablabla request", "Bender");
	}
	catch(const std::exception& e)
	{
		 std::cout << RED "ERROR: "<< e.what() << WHITE "\n";
	}

	// Making valid Form (Shrubbery)
	try
	{
		rrf = someRandomIntern.makeForm("Shrubbery creation", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << WHITE "\n";
	}

	try
	{
		Bureaucrat president("Muimui le Boss", 1);
		president.signForm(*rrf);
		president.executeForm(*rrf);
	}
	 catch(const std::exception& e)
	{
		std::cout << RED "ERROR: "<< e.what() << WHITE "\n";
	}
	delete rrf;
}
