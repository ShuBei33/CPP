/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:36:45 by estoffel          #+#    #+#             */
/*   Updated: 2022/07/31 07:45:59 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdlib>
#include <cstdio>
#include "../incl/Contact.hpp"
#include "../incl/PhoneBook.hpp"

PhoneBook::PhoneBook(void) : nbContact(0) {

	std::cout << BLUE "🐍 Constructor PhoneBook called" END << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	
	std::cout << RED "💥 Destructor PhoneBook called" END << std::endl;
	return ;
}

bool	isfullspace(String s) {

	for (int i = 0; s[i]; i++) {
		if (isspace(s[i]) == 0)
			return (false);
	}
	return (true);
}

void	PhoneBook::display(void) {

	system("clear");
	std::cout << std::endl;
	std::cout << BWHITE " Index" TURQ "|" BWHITE " First name" TURQ "|" BWHITE "  Last name" TURQ "|" BWHITE "   Nickname" TURQ "|" END << std::endl;
	std::cout << TURQ "===========================================" END << std::endl;

	for (int i = 0; i < nbContact && i < 8; i++) {
		std::cout << std::setw(6) << i << TURQ "|" END;
		this->Repertory[i].displayoneContact();
	}
	std::cout << TURQ "===========================================" END << std::endl;
}

void	PhoneBook::gettingline(String &buf) {

	getline(std::cin, buf);
	if (std::cin.eof()) {
		system("clear");
		return ;
	}
	if (!buf.size() || isfullspace(buf) == true) {
		std::cerr << std::endl << "Why are you making things difficult ?" << std::endl;
		std::cout << "👀 Please answer this time : ";
		gettingline(buf);
	}
	system("clear");
}

void	PhoneBook::addContact(void) {

	String	buf;

	system("clear");
	std::cout << std::endl << "First Name : ";
	gettingline(buf);
	Repertory[nbContact % 8].setFirstName(buf);
	std::cout << std::endl << "Last Name : ";
	gettingline(buf);
	Repertory[nbContact % 8].setLastName(buf);
	std::cout << std::endl << "Nickname : ";
	gettingline(buf);
	Repertory[nbContact % 8].setNickName(buf);
	std::cout << std::endl << "Phone number : ";
	gettingline(buf);
	Repertory[nbContact % 8].setPhoneNumber(buf);
	while (Repertory[nbContact % 8].getPhoneNumber() != buf) {

		std::cout << std::endl << "Phone number : ";
		gettingline(buf);
		Repertory[nbContact % 8].setPhoneNumber(buf);		
	}
	std::cout << std::endl << GREY "㊙ Darkest secret " WHITE ": ";
	gettingline(buf);
	Repertory[nbContact % 8].setDarkestSecret(buf);
	this->nbContact++;
}

void	PhoneBook::searchContact(void) 
{
	String	buf;
	int		index;
	int		max;

	if (!nbContact) {
		system("clear");
		std::cout<< std::endl << "⛔ Repertory empty ⛔" << std::endl;
		return ;
	}
	display();
	std::cout << std::endl << "🤖 Enter an index to display : ";
	gettingline(buf);
	if (sscanf(buf.c_str(), "%d", &index) == -1) {}
	if (nbContact > 8)
		max = 8;
	else 
		max = nbContact;
	while (!std::cin.eof() && (index < 0 || index >= max)) {
		display();
		std::cerr << std::endl << "🤡 No comment ............" << std::endl;
		std::cout << std::endl << "🤖 Enter an index to display : ";
		gettingline(buf);
		if (sscanf(buf.c_str(), "%d", &index) == -1) {}
	}
	if (std::cin.eof()) {
		system("clear");
		return ;
	}
	display();
	Repertory[index].displayfullContact();
}
