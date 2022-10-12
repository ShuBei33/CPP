/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 06:45:38 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 06:51:01 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <stdint.h>
# include <iostream>

typedef struct s_data
{
	char	c;
	int		i;
	float	f;
}				Data;

uintptr_t	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif
