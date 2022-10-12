/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:39:03 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 13:28:44 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Intern.hpp"

Intern::Intern() {
	std::cout << BLUE "🐍 Constructor " BWHITE "Intern" BLUE " called" END << std::endl;
}

Intern::Intern(const Intern& cpy) {

	*this = cpy;
	std::cout << TURQ "🐍🐍 Copy Constructor Intern called" END << std::endl;
}

Intern&	Intern::operator=(const Intern &asgn) {

	(void)asgn;
	std::cout << GREEN "🦕 Copy assignement Intern called" END << std::endl;
	return (*this);
}

Intern::~Intern() {

	std::cout << RED "💥 Destructor " BWHITE "Intern" RED " called" END << std::endl;
}

const char*	Intern::InexistantException::what() const throw() {

	return "🤡 This Form doesn't exist...";
}

Form	*Intern::makeForm(String formRequest, String target){

	for (int i = 0; i < 3; i++)
	{
		if (formRequest == _formName[i]) {
			std::cout << "Intern creates " << _formName[i] << " form" << std::endl;
			return ((*Intern::_f[i])(target));
		}
	}
	throw InexistantException();
}

Form	*Intern::makePardon(String target) {return (new PresidentialPardonForm(target));}

Form	*Intern::makeRobotomy(String target) {return (new RobotomyRequestForm(target));}

Form	*Intern::makeShrubbery(String target) {return (new ShrubberyCreationForm(target));}

String	Intern::_formName[3] = {
	"Presidential pardon",
	"Robotomy request",
	"Shrubbery creation"
};

Form	*(*Intern::_f[3])(String target) = {
	&Intern::makePardon,
	&Intern::makeRobotomy,
	&Intern::makeShrubbery
};