/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:54:23 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 17:15:56 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// fonction template classique
void iter_int(int &i)
{
	std::cout << "Test iter_int " << i << std::endl;
}

// fonction template instanciee
template<typename T>
void iter_t(T &t)
{
	std::cout << "Test iter_t " << t << std::endl;
}

template<typename T>
void print (T const& x) 
{
	std::cout << x << std::endl;
	return ;
}

template<typename T>
void	add (T& tab)
{
	tab = tab + "pouic";
}

int	main() {
	int	machin[] = {1, 6, 3, 8, 10};
	
	iter(machin, 5, iter_int);
	std::cout << '\n';
	iter<int, void>(machin, 5, iter_t);

	char const* strings[] = {"hello", "world", "hi", "booo"};
	iter<char const *, void>(strings, 4, iter_t);

	String	tab[10];
	
	for (int i = 0 ; i < 10 ; i++)
		tab[i] = String("Coucou");
	
	iter<String, void>(tab, 10, &print<String>);

	iter<String, void>(tab, 10, &add<String>);

	iter<String, void>(tab, 10, &print<String>);
}