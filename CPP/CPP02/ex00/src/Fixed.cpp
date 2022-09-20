/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 06:02:38 by parallels         #+#    #+#             */
/*   Updated: 2022/09/15 15:36:20 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

Fixed::Fixed(void): _Raw(0) {

	std::cout << BLUE "🐍 Default Constructor called" END << std::endl;
}

Fixed::Fixed(const Fixed &src) {

	*this = src;
	std::cout << TURQ "🐍🐍 Copy Constructor called" END << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << RED "💥 Destructor called" END << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src) {

	this->_Raw = src._Raw;
	std::cout << GREEN "🦕 Copy assignement operator called" END << std::endl;
	return (*this);
}

void	Fixed::setRawBits(int raw)
{
	std::cout << YELW "🦖 setRawBits fonction called" END << std::endl;
	_Raw = raw;
}

const int	&Fixed::getRawBits(void) const
{
	std::cout << PINK "🐉 getRawBits fonction called" END << std::endl;
	return (this->_Raw);
}
