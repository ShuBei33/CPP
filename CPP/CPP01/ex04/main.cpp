/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:42:14 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/22 02:06:52 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static int	err(int	ret, char **av) {

	if (ret == 1) {
		std::cerr << "🤡 Arguments must be : ./Sed_is_for_losers <filename> <str_to_replace> <new_str>" << std::endl;
		return (1);
	}
	if (ret == 2) {
		std::cerr << "Unable to open file " << av[1] << std::endl;
		return (1);
	}
	if (ret == 3) {
		std::cerr << "Nothing to replace or change" << std::endl;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av) {

	std::ifstream	src;
	std::ofstream	dst;
	std::string		filename;
	std::string		buff;

	if (ac != 4)
		return (err(1, NULL));

	std::string		s1(av[2]);
	std::string		s2(av[3]);

	filename = av[1];
	src.open(filename.c_str());
	if (!src.is_open())
		return (err(2, av));

	if (s1 == "" || s2 == "" || s1 == s2)
		return (err(3, NULL));

	dst.open(filename.append(".replace").c_str());
	if (!dst.is_open()) {
		src.close();
		return (err(2, NULL));
	}
	size_t i;
	while (src.eof() == false) {
		getline(src, buff);
		i = buff.find(s1);
		while (i != std::string::npos) {
			buff.erase(i, s1.length());
			buff.insert(i, s2);
			i = buff.find(s1);
		}
		dst << buff << std::endl;
	}
	src.close();
	dst.close();
	return (0);
}
