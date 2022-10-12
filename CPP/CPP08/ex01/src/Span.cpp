/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:00:51 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/05 02:32:47 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0) {

	std::cout << BLUE "🐍 Constructor " BWHITE "Span" BLUE " called" END << std::endl;
}

Span::Span(const uint n): _N(n) {

	std::cout << BLUE "🐍 Constructor " BWHITE "Span" BLUE " called" END << std::endl;
}

Span::Span(const Span &cpy): _N(cpy._N) {

	std::cout << TURQ "🐍🐍 Copy Constructor Span called" END << std::endl;
}

Span&	Span::operator=(const Span &asgn) {

	std::cout << GREEN "🦕 Copy assignement Span called" END << std::endl;
	this->_data.clear();
	this->_N = asgn._N;
	this->_data = asgn._data;
	return (*this);
}

Span::~Span() {

	_data.clear();
	std::cout << RED "💥 Destructor " BWHITE "Span" RED " called" END << std::endl;
}

const char*	Span::NotFoundException::what() const throw() {

	return "Can't add more numbers, it's full\n";
}

const char*	Span::ReachedMaxException::what() const throw() {

	return "Nothing stocked yet, or only one, so there is no distance to find\n";
}

void	Span::addNumber(const int n) {

	if (_data.size() == _N)
		throw Span::ReachedMaxException();
	_data.push_back(n);
}

uint	Span::shortestSpan() const {

	if (_data.size() < 2)
		throw Span::NotFoundException();

	std::vector<int>	cpy = _data;
	long				mini = std::numeric_limits<long>::max();

	sort(cpy.begin(), cpy.end());
	for (size_t i = 0; i < (_data.size() - 1); i++)
		mini = std::min(mini, static_cast<long>(cpy[i + 1] - cpy[i]));
	return (mini);
	
}

uint	Span::longestSpan() const {

	if (_data.size() < 2)
		throw Span::NotFoundException();

	VectIter	mini = std::min_element(_data.begin(), _data.end());
	VectIter	maxi = std::max_element(_data.begin(), _data.end());

	return (*maxi - *mini);
}
