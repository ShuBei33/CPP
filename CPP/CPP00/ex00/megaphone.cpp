/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:54:27 by parallels         #+#    #+#             */
/*   Updated: 2022/07/29 02:29:34 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j;

	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (av[i]) {
		j = 0;
		while (av[i][j]) {
			av[i][j] = toupper(av[i][j]);
			++j;
		}
		std::cout << av[i];
		++i;
	}
	std::cout << std::endl;
	return (0);
}