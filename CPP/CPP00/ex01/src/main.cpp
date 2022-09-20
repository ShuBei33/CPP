/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 02:56:03 by parallels         #+#    #+#             */
/*   Updated: 2022/07/31 07:49:31 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "../incl/Contact.hpp"
#include "../incl/PhoneBook.hpp"

int	main(void) {

	String		buf;
	PhoneBook	rptr;

	std::cout << std::endl << WHITE "🔎 Enter a keyword such as " GREEN "ADD " WHITE "-" GREEN " SEARCH " WHITE "-" GREEN " EXIT " WHITE ":" END << std::endl << std::endl;
	while (getline(std::cin, buf))
	{
		if (buf == "EXIT") {
			system("clear");
			std::cout << std::endl;
			break ;
		}
		if (std::cin.eof())
			return (1);
		if (buf == "ADD")
			rptr.addContact();
		if (buf == "SEARCH")
			rptr.searchContact();
		std::cout << std::endl << WHITE "🔎 Enter a keyword such as " GREEN "ADD " WHITE "-" GREEN " SEARCH " WHITE "-" GREEN " EXIT " WHITE ":" END << std::endl << std::endl;
	}
	system("clear");
	return (0);
}
