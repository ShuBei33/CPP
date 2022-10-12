/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 02:45:42 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 14:00:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137) {

	std::cout << BLUE "🐍 Constructor " BWHITE "ShrubberyCreationForm" BLUE " called" END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const String& target)
: Form("ShrubberyCreation", 145, 137), _Target(target) {
	std::cout << BLUE "🐍 Constructor " BWHITE "ShrubberyCreationForm" BLUE " called" END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
: Form(cpy.getName(), cpy.getSignGrade(), cpy.getExeGrade()), _Target(cpy._Target) {

	std::cout << TURQ "🐍🐍 Copy Constructor ShrubberyCreationForm called" END << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &asgn) {

	this->_Target = asgn._Target;
	std::cout << GREEN "🦕 Copy assignement ShrubberyCreationForm called" END << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	std::cout << RED "💥 Destructor " BWHITE "ShrubberyCreationForm" RED " called" END << std::endl;
}

const String&	ShrubberyCreationForm::getTarget() const {return this->_Target;}

const char*	ShrubberyCreationForm::OtherException::what() const throw() {

	return "Grade is not appropriate to execute this Form";
}

const char*	ShrubberyCreationForm::NotSignedException::what() const throw() {

	return "The Form needs to be signed to execute it";
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const {

	std::ofstream	outfile;
	const String	filename = this->_Target + "_shrubbery";

	if (getIsSigned() == 0)
		throw ShrubberyCreationForm::NotSignedException();
	if (executor.getGrade() >= 1 && executor.getGrade() <= 137) {

		outfile.open(filename.c_str());
		outfile << "                                                        " << std::endl;
		outfile << "                                           ✨           " << std::endl;
		outfile << "        ✨                                              " << std::endl;
		outfile << "              v .   ._, |_  .,                       ✨ " << std::endl;
		outfile << "           `-._\\/  .  \\ /    |/_                      " << std::endl;
		outfile << "               \\\\  _\\, y | \\//      ✨              " << std::endl;
		outfile << "         _\\_🦉__\\\\, \\\\/ -.\\||                     " << std::endl;
		outfile << "           `7-,--.`._||  / / ,                          " << std::endl;
		outfile << "  ✨         /'     `-. `./ / |/_.'                     " << std::endl;
		outfile << "                     |    |//                           " << std::endl;
		outfile << "                     |_    /                            " << std::endl;
		outfile << "                     |-   |                             " << std::endl;
		outfile << "                     |   =|                             " << std::endl;
		outfile << "                     |    |                             " << std::endl;
		outfile << "--------------------/ ,  . \\------🐑--._               " << std::endl;
		outfile << "        🐏                                              " << std::endl;
		outfile << "------------------------------------------------        " << std::endl;
		outfile.close();
	}
	else
		throw ShrubberyCreationForm::OtherException();
}