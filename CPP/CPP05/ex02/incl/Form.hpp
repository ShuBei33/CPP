/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:01:55 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/03 06:33:50 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "../incl/Bureaucrat.hpp"

# include <string>
# include <iostream>
# include <exception>

typedef	std::string		String;
typedef	unsigned int	uint;

class Bureaucrat;

class Form {

	public:
		Form();
		Form(const String&, int, int);
		Form(const Form& cpy);
		Form& operator= (const Form& asgn);
		virtual ~Form();

		const String&	getName() const;
		const int&		getSignGrade() const;
		const int&		getExeGrade() const;
		const bool&		getIsSigned() const;

		void			beSigned(Bureaucrat&);

		virtual void	execute(Bureaucrat const& executor) const = 0;

	private:
		const String	_Name;
		bool			_IsSigned;
		const int		_SignGrade;
		const int		_ExeGrade;

		class GradeTooLowException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};
		
		class GradeTooHighException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};
		
		class AlreadySignedException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Form& stuff);

#endif
