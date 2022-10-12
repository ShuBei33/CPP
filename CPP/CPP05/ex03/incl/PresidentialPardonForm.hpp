/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:21:53 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 06:29:59 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTAILPARDONFORM_HPP
# define PRESIDENTAILPARDONFORM_HPP

# include "../incl/Form.hpp"

# include <string>
# include <iostream>
# include <exception>

typedef	std::string		String;
typedef	unsigned int	uint;

class Bureaucrat;

class PresidentialPardonForm: public Form {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const String& target);
		PresidentialPardonForm(const PresidentialPardonForm& cpy);
		PresidentialPardonForm& operator= (const PresidentialPardonForm& asgn);
		virtual ~PresidentialPardonForm();

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
