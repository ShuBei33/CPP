/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:23:58 by parallels         #+#    #+#             */
/*   Updated: 2022/10/01 11:52:01 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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

# include "../incl/Form.hpp"

# include <string>
# include <iostream>
# include <exception>

typedef	std::string		String;
typedef	unsigned int	uint;

class Form;

class Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(const String&, int);
		Bureaucrat(const Bureaucrat& cpy);
		Bureaucrat& operator= (const Bureaucrat& asgn);
		virtual ~Bureaucrat();

		const String&	getName() const;
		const int&		getGrade() const;

		void			DownGrade();
		void			UpGrade();
		void			signForm(Form&);

	private:
		const String	_Name;
		int				_Grade;
	
		class GradeTooHighException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {
			private:
				virtual const char*	what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& stuff);

#endif
