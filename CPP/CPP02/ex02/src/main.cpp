/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 06:02:08 by parallels         #+#    #+#             */
/*   Updated: 2022/09/21 23:30:21 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
	// Fixed	a(4.2f);
	// Fixed	b(3.141592653589793f);
	// Fixed	c(0);
	// Fixed	d(-21);

	// std::cout << std::boolalpha;
	// std::cout << "a: " << a << std::endl;
	// std::cout << "b: " << b << std::endl;
	// std::cout << "c: " << c << std::endl;
	// std::cout << "d: " << d << std::endl;
	// std::cout << "a + b: " << a + b << std::endl;
	// std::cout << "c - d: " << c - d << std::endl;
	// std::cout << "a * c: " << a * c << std::endl;
	// std::cout << "b / d: " << b / d << std::endl;
	// std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	// std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;
	// std::cout << "a++: " << a++ << std::endl;
	// std::cout << "a: " << a << std::endl;
	// std::cout << "++c: " << ++c << std::endl;
	// std::cout << "--b: " << --b << std::endl;
	// std::cout << "d--: " << d-- << std::endl;
	// std::cout << "d: " << d << std::endl;
	// std::cout << "a > 1: " << (a > Fixed(1)) << std::endl;
	// std::cout << "d < -1: " << (d < Fixed(-1)) << std::endl;
	// std::cout << "b >= b + 1 - 1 * 1: " << (b >= b + Fixed(1) - Fixed(1) * Fixed(1)) << std::endl;
	// std::cout << "c <= c - 1: " << (c <= c - Fixed(1)) << std::endl;
	// std::cout << "c == 1: " << (c == Fixed(1)) << std::endl;
	// std::cout << "a != b: " << (a != b) << std::endl;
	// return 0;
}