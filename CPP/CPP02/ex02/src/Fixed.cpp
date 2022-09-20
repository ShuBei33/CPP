/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 06:02:38 by parallels         #+#    #+#             */
/*   Updated: 2022/08/15 06:03:30 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

Fixed::Fixed(void) {

	std::cout << std::endl;
	std::cout << BLUE "🐍 Constructor Fixed called" END << std::endl;
	std::cout << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << std::endl;
	std::cout << RED "💥 Destructor Fixed called" END << std::endl;
	std::cout << std::endl;
}