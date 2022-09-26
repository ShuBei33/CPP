/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 07:05:54 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:20:33 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

typedef	std::string		String;
typedef	unsigned int	uint;

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy);
		~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal& asgn);
		
		const String&	getType() const;

		void			makeSound() const;

	protected:
		WrongAnimal(String _Type);
		String	_Type;

};

#endif