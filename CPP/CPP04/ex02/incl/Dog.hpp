/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:52:24 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 07:56:05 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../incl/Animal.hpp"
# include "../incl/Brain.hpp"

# include <string>
# include <iostream>

typedef	std::string		String;
typedef	unsigned int	uint;

class Dog: public Animal {

	public:
		Dog(void);
		Dog(const Dog& cpy);
		virtual ~Dog(void);

		Dog&			operator=(const Dog& asgn);

		virtual void	makeSound() const;
		void			displayBrain(const uint nb) const;
		void			fillBrain(const uint);

	private:
		Brain	*_Brain;

};

#endif
