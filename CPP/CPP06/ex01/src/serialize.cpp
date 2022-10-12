/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 06:54:42 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 07:01:12 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data*>(raw));
}