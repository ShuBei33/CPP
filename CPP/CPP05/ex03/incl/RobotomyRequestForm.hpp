/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:21:18 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 06:29:49 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "../incl/Form.hpp"

# include <string>
# include <iostream>
# include <exception>

typedef	std::string		String;
typedef	unsigned int	uint;

class Bureaucrat;

class RobotomyRequestForm: public Form {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const String& target);
		RobotomyRequestForm(const RobotomyRequestForm& cpy);
		RobotomyRequestForm& operator= (const RobotomyRequestForm& asgn);
		virtual ~RobotomyRequestForm();

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
