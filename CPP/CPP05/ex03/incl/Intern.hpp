/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:38:59 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 13:27:49 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include <exception>
# include <cstdlib>

# include "../incl/PresidentialPardonForm.hpp"
# include "../incl/RobotomyRequestForm.hpp"
# include "../incl/ShrubberyCreationForm.hpp"

typedef	std::string		String;
typedef	unsigned int	uint;

class Intern {

	public:
		Intern();
		Intern(const Intern& cpy);
		~Intern(void);
		Intern&	operator=(const Intern& asgn);

		Form		*makeForm(String formRequest, String target);
		static Form	*makePardon(String target);
		static Form	*makeRobotomy(String target);
		static Form	*makeShrubbery(String target);

		class InexistantException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};

	private:
		static String	_formName[3];
		static Form	*(*_f[3])(String target);
};

#endif