/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:36:50 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/13 17:39:10 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdlib>
#include <string>
#include "../incl/Contact.hpp"                     
#include "../incl/PhoneBook.hpp"

Contact::Contact(void) {
	
	std::cout << BLUE "🐍 Constructor Contact called" END << std::endl;
	return ;
}

Contact::~Contact(void) {
	
	std::cout << RED "💥 Destructor Contact called" END << std::endl;
	return ;
}

void	Contact::setFirstName(String firstname) {_FirstName = firstname;}

void	Contact::setLastName(String lastname) {_LastName = lastname;}

void	Contact::setNickName(String nickname) {_NickName = nickname;}

void	Contact::setDarkestSecret(String darkestsecret) {_DarkestSecret = darkestsecret;}

const String	&Contact::getPhoneNumber(void) const
{
	return (this->_PhoneNumber);
}

bool	isfulldigit(String s) {

	for (int i = 0; s[i]; i++) {
		if (isdigit(s[i]) == 0)
			return (false);
	}
	return (true);
}

void	Contact::setPhoneNumber(String phonenumber)
{
	if (isfulldigit(phonenumber) == false) {
		system("clear");
		std::cout << std::endl;
		std::cerr << "🤡 Pouet Pouet numbers only poti blagueur 🤡" << std::endl;
		return ;
	}
	_PhoneNumber = phonenumber;
}

String	displayten(String s) {

	if (s.size() > 10)
		return(s.substr(0, 9) + ".");
	else
		return(s);
}

void	Contact::displayoneContact(void) const {

	std::cout << std::setw(11) << displayten(this->_FirstName) << TURQ "|" END;
	std::cout << std::setw(11) << displayten(this->_LastName) << TURQ "|" END;
	std::cout << std::setw(11) << displayten(this->_NickName) << TURQ "|" END << std::endl;
}

void	Contact::displayfullContact(void) const {

	std::cout << std::endl;
	std::cout << TURQ "|" END << std::setw(20) << LWHITE " F" END "irst name : " << this->_FirstName << std::endl;
	std::cout << TURQ "|" END << std::setw(20) << LWHITE " L" END "ast name : " << this->_LastName << std::endl;
	std::cout << TURQ "|" END << std::setw(20) << LWHITE " N" END "ickname : " << this->_NickName << std::endl;
	std::cout << TURQ "|" END << std::setw(20) << LWHITE " P" END "hone number : " << this->_PhoneNumber << std::endl;
	std::cout << TURQ "|" END << std::setw(20) << LWHITE " D" END "arkest secret : " << this->_DarkestSecret << std::endl;
	std::cout << std::endl;
}
