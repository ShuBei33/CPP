/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 07:08:22 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:20:59 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "../incl/WrongAnimal.hpp"

# include <string>
# include <iostream>

typedef	std::string		String;
typedef	unsigned int	uint;

class WrongCat: public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const WrongCat& cpy);
		~WrongCat(void);

		WrongCat&	operator=(const WrongCat& asgn);

		void		makeSound() const;
};

#endif
