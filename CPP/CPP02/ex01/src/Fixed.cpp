/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 06:02:38 by parallels         #+#    #+#             */
/*   Updated: 2022/09/18 18:38:46 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

Fixed::Fixed(void): _Raw(0) {

	std::cout << BLUE "🐍 Default Constructor called" END << std::endl;
}

Fixed::Fixed(const int i) {

	this->_Raw = i << _nbBit;
	std::cout << BLUE "🐸 Int Constructor called" END << std::endl;
}

Fixed::Fixed(const float f) {

	this->_Raw = roundf(f * (1 << _nbBit));
	std::cout << BLUE "🐢 Float Constructor called" END << std::endl;
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

void	Fixed::setRawBits(int raw) { _Raw = raw; }

const int	&Fixed::getRawBits(void) const {

	return (this->_Raw);
}

int		Fixed::toInt(void) const {

	return (this->_Raw >> _nbBit);
}

float	Fixed::toFloat(void) const {

	return (this->_Raw / (float)(1 << _nbBit));
}

std::ostream& operator<<(std::ostream &flux, Fixed const &src)
{
	flux << src.toFloat();
	return flux;
}
