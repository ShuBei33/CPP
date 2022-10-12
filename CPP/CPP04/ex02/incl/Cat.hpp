/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:49:45 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 07:56:44 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../incl/Animal.hpp"
# include "../incl/Brain.hpp"

# include <string>
# include <iostream>

typedef	std::string		String;
typedef	unsigned int	uint;

class Cat: public Animal {

	public:
		Cat(void);
		Cat(const Cat& cpy);
		virtual ~Cat(void);

		Cat&			operator=(const Cat& asgn);

		virtual void	makeSound() const;
		void			displayBrain(const uint) const;
		void			fillBrain(const uint);
	
	private:
		Brain	*_Brain;
};

#endif
