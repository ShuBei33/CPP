/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 00:56:28 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 12:54:26 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incl/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45) {

	std::cout << BLUE "🐍 Constructor " BWHITE "RobotomyRequestForm" BLUE " called" END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const String& target)
: Form("RobotomyRequest", 72, 45), _Target(target) {
	std::cout << BLUE "🐍 Constructor " BWHITE "RobotomyRequestForm" BLUE " called" END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
: Form(cpy.getName(), cpy.getSignGrade(), cpy.getExeGrade()), _Target(cpy._Target) {

	std::cout << TURQ "🐍🐍 Copy Constructor RobotomyRequestForm called" END << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &asgn) {

	this->_Target = asgn._Target;
	std::cout << GREEN "🦕 Copy assignement RobotomyRequestForm called" END << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	std::cout << RED "💥 Destructor " BWHITE "RobotomyRequestForm" RED " called" END << std::endl;
}

const String&	RobotomyRequestForm::getTarget() const {return this->_Target;}

const char*	RobotomyRequestForm::OtherException::what() const throw() {

	return "Grade is not appropriate to execute this Form";
}

const char*	RobotomyRequestForm::NotSignedException::what() const throw() {

	return "The Form needs to be signed to execute it";
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const {

	if (getIsSigned() == 0)
		throw RobotomyRequestForm::NotSignedException();
	if (executor.getGrade() >= 1 && executor.getGrade() <= 45)
	{
		std::cout << "Bzzzzt bzzzzzzzt *bruits de perceuse*" << std::endl;
		std::cout << _Target << "'s robotomisation started\n";
		if (rand() % 2)
			std::cout << "The process is a SUCCESS" << std::endl;
		else
			std::cout << "The process is a FAILURE" << std::endl; 
	}
	else
		throw RobotomyRequestForm::OtherException();
}