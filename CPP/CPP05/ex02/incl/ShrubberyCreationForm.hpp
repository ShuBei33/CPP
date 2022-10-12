/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:21:13 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 06:26:21 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "../incl/Form.hpp"

# include <string>
# include <iostream>
# include <exception>
# include <fstream>

typedef	std::string		String;
typedef	unsigned int	uint;

class Bureaucrat;

class ShrubberyCreationForm: public Form {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const String& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& cpy);
		ShrubberyCreationForm& operator= (const ShrubberyCreationForm& asgn);
		virtual ~ShrubberyCreationForm();

		const String&	getTarget() const;

		virtual void	execute(Bureaucrat const & executor) const;

		class OtherException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};

		class NotSignedException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};

	private:
		String	_Target;
};

#endif
