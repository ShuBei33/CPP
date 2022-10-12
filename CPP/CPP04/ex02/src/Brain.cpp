/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 07:46:34 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/27 08:49:08 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Brain.hpp"

Brain::Brain(void) {

	std::cout << BLUE "🐍 Constructor " BWHITE "Brain" BLUE " called" END << std::endl;
}

Brain::Brain(const Brain &cpy) {
	*this = cpy;
}

Brain&	Brain::operator=(const Brain &asgn) {

	std::cout << GREEN "🦕 Copy assignement Brain called" END << std::endl;
	for(int i = 0 ; i < IDEA_NB ; i++)
		_Ideas[i] = asgn._Ideas[i];
	return (*this);
}

Brain::~Brain(void) {

	std::cout << RED "💥 Destructor " BWHITE "Brain" RED " called" END << std::endl;
}

void	Brain::displayIdeas(const uint nb) const {

	if (nb > IDEA_NB) {
		std::cerr << "🤡 There won't be any segfault here now test it right pls\n" << std::endl;
		return; }
	for (uint i = 0 ; i < nb ; i++)
		std::cout << "💡 Idea n°" << (i + 1) << " : " << IWHITE << _Ideas[i] << END << "\n\n" << std::flush;
}

void	Brain::fillIdeas(const uint nb) {

	if (nb > IDEA_NB) {
		std::cerr << "🤡 There won't be any segfault here now test it right pls\n" << std::endl;
		return; }
	for (uint i = 0 ; i < nb ; i++) {
		std::cout << "\n🪞  Please share " << nb << " idea(s) with me <3 \n\n";
		std::cout << "✨ " << (i + 1) << " : ";
		getline(std::cin, _Ideas[i], '\n');
		if (std::cin.eof())
			return;
	}
}