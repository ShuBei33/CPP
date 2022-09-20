/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 06:00:50 by parallels         #+#    #+#             */
/*   Updated: 2022/09/14 20:25:28 by parallels        ###   ########.fr       */
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

typedef	std::string	String;

class Fixed {

	public:
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);
		
		const int	&getRawBits(void) const;
		
		Fixed		&operator=(const Fixed &src);
		void		setRawBits(int const raw);
		

	private:
		int					_Raw;
		static unsigned const int	_nbBit = 8;

};

#endif
