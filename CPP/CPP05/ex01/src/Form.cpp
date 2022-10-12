/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:02:11 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 13:37:38 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Form.hpp"

Form::Form(): _Name("Strange Paper"), _IsSigned(0), _SignGrade(150), _ExeGrade(150) {

	std::cout << BLUE "🐍 Default Constructor Form " BWHITE 
	<< _Name << BLUE " called" END << std::endl;
}

Form::Form(const String& name, const int signgrade, const int exegrade)
: _Name(name), _IsSigned(0), _SignGrade(signgrade), _ExeGrade(exegrade) {

	if (this->_SignGrade > 150 || this->_ExeGrade > 150)
		throw Form::GradeTooLowException();
	else if (this->_SignGrade < 1 || this->_ExeGrade < 1)
		throw Form::GradeTooHighException();
	else
		std::cout << BLUE "🐍 Default Constructor Form " BWHITE 
		<< _Name << BLUE " whose grade needed to be signed is " BWHITE << _SignGrade 
		<< BLUE " and grade needed bo be executed is " BWHITE << _ExeGrade << BLUE " called" END << std::endl;
	
}

Form::Form(const Form &cpy): _Name(cpy._Name), _SignGrade(cpy._SignGrade), _ExeGrade(cpy._ExeGrade) {

	*this = cpy;
	std::cout << TURQ "🐍🐍 Copy Constructor Form " BWHITE 
	<< _Name << TURQ " whose grade needed to be signed is " BWHITE << _SignGrade 
	<< TURQ " and grade needed bo be executed is " BWHITE << _ExeGrade << TURQ " called" END << std::endl;
}

Form&	Form::operator= (const Form& asgn) {

	this->_IsSigned = asgn._IsSigned;
	std::cout << GREEN "🦕 Copy assignement Form called" END << std::endl;
	return (*this);
}

Form::~Form(void) {

	std::cout << RED "💥 Destructor Form " BWHITE 
	<< _Name << RED " called" END << std::endl;
}

const String&	Form::getName() const {return this->_Name;}

const int&	Form::getSignGrade() const {return this->_SignGrade;}

const int&	Form::getExeGrade() const {return this->_ExeGrade;}

const bool&	Form::getIsSigned() const {return this->_IsSigned;}

std::ostream& operator<<(std::ostream &stream, Form const &stuff)
{
	if (stuff.getIsSigned() == 0) {
		stream << stuff.getName() << " Form, isn't signed yet. It needs grade " << stuff.getSignGrade() 
		<< " to be signed, and grade " << stuff.getExeGrade() << " to be executed.\n";
	}
	if (stuff.getIsSigned() == 1) {
		stream << stuff.getName() << " Form has been signed. It needed grade " << stuff.getSignGrade() 
		<< " to be signed, and grade " << stuff.getExeGrade() << " to be executed.\n";
	}
	return stream;
}

const char*	Form::GradeTooLowException::what() const throw() {

	return "Grade is too low to sign or execute Form";
}

const char*	Form::GradeTooHighException::what() const throw() {

	return "Grade is too high (doesn't have Time for this sh*t) to sign or execute Form";
}

const char*	Form::AlreadySignedException::what() const throw() {

	return "This form can't be signed twice !";
}

void	Form::beSigned(Bureaucrat& rdm) {

	if (_IsSigned == 1)
		throw Form::AlreadySignedException();
	else if (rdm.getGrade() > this->_SignGrade)
		throw Form::GradeTooLowException();
	else if (rdm.getGrade() <= this->_SignGrade && rdm.getGrade() > 0)
		_IsSigned = 1;
	return ;
}