/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 04:16:15 by parallels         #+#    #+#             */
/*   Updated: 2022/08/06 00:00:07 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
# define END "\e[0m"

# include <string>
# include <iostream>
# include <iomanip>

typedef	std::string	String;

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		const String	&getPhoneNumber(void) const;

		void	setFirstName(String firstname);
		void	setLastName(String lastname);
		void	setNickName(String nickname);
		void	setPhoneNumber(String phonenumber);
		void	setDarkestSecret(String darkestsecret);
		void	displayoneContact(void) const;
		void	displayfullContact(void) const;

	private:
		String	_FirstName;
		String	_LastName;
		String	_NickName;
		String	_PhoneNumber;
		String	_DarkestSecret;
};

#endif
