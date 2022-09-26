/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 06:00:50 by parallels         #+#    #+#             */
/*   Updated: 2022/09/21 23:04:31 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define GREY "\033[0;30m"
# define RORED "\033[0;31m"
# define RED "\033[0;91m"
# define GREEN "\033[0;32m"
# define YELW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PINK "\033[0;35m"
# define TURQ "\033[0;36m"
# define WHITE "\033[0;97m"
# define BWHITE "\033[1;97m"
# define LWHITE "\033[4;97m"
# define IWHITE "\033[3;97m"
# define END "\e[0m"

# include <string>
# include <iostream>
# include <cmath>

typedef	std::string		String;
typedef	unsigned int	uint;

class Fixed {

	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& copy);
		~Fixed(void);
		
		const int		&getRawBits(void) const;

		bool			operator<(const Fixed&) const;
		bool			operator>(const Fixed&) const;
		bool			operator>=(const Fixed&) const;
		bool			operator<=(const Fixed&) const;
		bool			operator==(const Fixed&) const;
		bool			operator!=(const Fixed&) const;
		Fixed&			operator=(const Fixed& assign);
		Fixed			operator+(const Fixed&);
		Fixed			operator-(const Fixed&);
		Fixed			operator*(const Fixed&);
		Fixed			operator/(const Fixed&);
		Fixed&			operator++();
		Fixed&			operator--();
		Fixed			operator++(int);
		Fixed			operator--(int);

		static Fixed&		min(Fixed&, Fixed&);
		static Fixed&		max(Fixed&, Fixed&);
		static const Fixed&	min(const Fixed&, const Fixed&);
		static const Fixed&	max(const Fixed&, const Fixed&);
		
		
		int				toInt(void) const;
		float			toFloat(void) const;
		void			setRawBits(int const raw);

	private:
		int					_Raw;
		static const uint	_nbBit;
		
};

std::ostream& operator<<(std::ostream &stream, Fixed const& nb);

#endif
