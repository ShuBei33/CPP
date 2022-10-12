/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 06:51:31 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 07:07:57 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int	main() {

	Data	data;
	data.c = 'c';
	data.i = 12;
	data.f = 14.03f;

	std::cout << "adress data : " << &data << std::endl;
	std::cout << "deserialize: " << deserialize(serialize(&data)) << std::endl;
}