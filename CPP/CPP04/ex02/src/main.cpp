/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:33:38 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/28 19:32:57 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongCat.hpp"
#include "../incl/Brain.hpp"

int main()
{
	#define SIZE	4
	#define IDEA_NBR 3
	
	std::cout << "\n";
	const Animal* tab[SIZE];

	for (uint i = 0; i < SIZE; i++)
		i < (SIZE / 2) ? tab[i] = new Cat : tab[i] = new Dog;
	for (uint i = 0; i < SIZE; i++)
		tab[i]->makeSound();
	for (uint i = 0; i < SIZE; i++)
		delete tab[i];
	std::cout << "\n" << std::flush;

	//ici test de la copie profonde. Si OK, le contenu doit etre identique.
	Dog	Medor;
	Medor.fillBrain(IDEA_NBR);
	std::cout << "\n" << std::endl;
	Medor.displayBrain(IDEA_NBR);
	std::cout << "\n" << std::endl;
	Dog Canigoo = Medor;
	std::cout << "\n" << std::endl;
	Canigoo.displayBrain(IDEA_NBR);
	std::cout << "\n" << std::endl;

	// const Animal	Pupuce; //ce test doit empecher la compilation!
	
	//  Pupuce.makeSound();

	return 0;
}
