/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:36:38 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 12:57:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5) {

	std::cout << BLUE "🐍 Constructor " BWHITE "PresidentialPardonForm" BLUE " called" END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const String& target)
: Form("PresidentialPardon", 25, 5), _Target(target) {
	std::cout << BLUE "🐍 Constructor " BWHITE "PresidentialPardonForm" BLUE " called" END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
: Form(cpy.getName(), cpy.getSignGrade(), cpy.getExeGrade()), _Target(cpy._Target) {

	std::cout << TURQ "🐍🐍 Copy Constructor PresidentialPardonForm called" END << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &asgn) {

	this->_Target = asgn._Target;
	std::cout << GREEN "🦕 Copy assignement PresidentialPardonForm called" END << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

	std::cout << RED "💥 Destructor " BWHITE "PresidentialPardonForm" RED " called" END << std::endl;
}

const String&	PresidentialPardonForm::getTarget() const {return this->_Target;}

const char*	PresidentialPardonForm::OtherException::what() const throw() {

	return "Grade is not appropriate to execute this Form";
}

const char*	PresidentialPardonForm::NotSignedException::what() const throw() {

	return "The Form needs to be signed to execute it";
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const {

	if (getIsSigned() == 0)
		throw PresidentialPardonForm::NotSignedException();
	if (executor.getGrade() >= 1 && executor.getGrade() <= 5)
	{
		std::cout << _Target << " has been forgiven by Zaphod Beeblebrox\n";
	}
	else if (executor.getGrade() < 1 || executor.getGrade() > 5)
		throw PresidentialPardonForm::OtherException();
}