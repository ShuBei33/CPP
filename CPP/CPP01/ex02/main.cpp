/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:44:19 by estoffel          #+#    #+#             */
/*   Updated: 2022/08/05 23:36:16 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {

	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::endl;
	std::cout << "📦 Address string    : " << &string << std::endl;
	std::cout << "📬 Address stringPTR : " << &stringPTR << std::endl;
	std::cout << "📦 Address stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "🧠 String content    : " << string << std::endl;
	std::cout << "📦 StringPTR content : " << stringPTR << std::endl;
	std::cout << "🧠 StringREF content : " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}