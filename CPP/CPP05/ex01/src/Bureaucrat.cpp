/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:24:06 by parallels         #+#    #+#             */
/*   Updated: 2022/10/03 13:37:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _Name("Some dude"), _Grade(90) {

	std::cout << BLUE "🐍 Default Constructor Bureaucrat " BWHITE 
	<< _Name << BLUE " whom grade is " BWHITE << _Grade << BLUE " called" END << std::endl;
}

Bureaucrat::Bureaucrat(const String& name, int grade): _Name(name), _Grade(grade) {

	// if (this->_Grade < 1)
	// 	throw Bureaucrat::GradeTooHighException();
	// else if (this->_Grade > 150)
	// 	throw Bureaucrat::GradeTooLowException();
	std::cout << BLUE "🐍 Default Constructor Bureaucrat " BWHITE 
	<< _Name << BLUE " whom grade is " BWHITE << _Grade << BLUE " called" END << std::endl;
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _Name(cpy._Name), _Grade(cpy._Grade) {

	*this = cpy;
	std::cout << TURQ "🐍🐍 Copy Constructor Bureaucrat " BWHITE 
	<< _Name << TURQ " whom grade is " BWHITE << _Grade << TURQ " called" END << std::endl;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& asgn) {

	this->_Grade = asgn._Grade;
	std::cout << GREEN "🦕 Copy assignement Bureaucrat " BWHITE 
	<< _Name << GREEN " whom grade is " BWHITE << _Grade << GREEN " called" END << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {

	std::cout << RED "💥 Destructor Bureaucrat " BWHITE 
	<< _Name << RED " whom grade is " BWHITE << _Grade << RED " called" END << std::endl;
}

const String&	Bureaucrat::getName() const {return this->_Name;}

const int&	Bureaucrat::getGrade() const {return this->_Grade;}

void	Bureaucrat::DownGrade() {

	++_Grade;
	if (_Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << "The grade of " << _Name << " is now " << _Grade << std::endl;
}

void	Bureaucrat::UpGrade() {

	--_Grade;
	if (_Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		std::cout << "The grade of " << _Name << " is now " << _Grade << std::endl;
}

std::ostream& operator<<(std::ostream &stream, Bureaucrat const &stuff)
{
	stream << stuff.getName() << ", bureaucrat grade " << stuff.getGrade() << ".\n";
	return stream;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {

	return "Grade is too high or is negative, which is weird";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {

	return "Grade is too low";
}

void	Bureaucrat::signForm(Form& frm) {

	if (frm.getIsSigned() == 0 && _Grade <= frm.getSignGrade()) {
		std::cout << "Bureaucrat " << _Name << " signed " << frm.getName() << std::endl;
	}
	else if (_Grade > frm.getSignGrade())
		std::cout << "Bureaucrat " << _Name << " couldn't signed " << frm.getName() 
		<< " because his grade is too low" << std::endl;
	else if (frm.getIsSigned() == 1 && _Grade <= frm.getSignGrade())
		std::cout << "Bureaucrat " << _Name << " couldn't signed " << frm.getName() 
		<< " because it was already signed by someone else" << std::endl;
	frm.beSigned(*this);
}