/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:10:53 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 08:35:15 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main() {

	srand(time(NULL));
	Base*	Cacaolait;

	Cacaolait = generate();
	std::cout << "\n";
	identify(Cacaolait);
	std::cout << "\n";
	identify(*Cacaolait);
	std::cout << "\n";
	delete Cacaolait;
	return 0;
}