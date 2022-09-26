/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 04:16:27 by parallels         #+#    #+#             */
/*   Updated: 2022/08/12 04:17:01 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);
	
		void	gettingline(String &buf);
		void	addContact(void);
		void	searchContact(void);
		void	display(void);

	private:
		Contact	Repertory[8];
		int 	nbContact;
		
};

#endif