/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 02:16:16 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/04 08:38:08 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include <cctype>
#include <string>
#include <iomanip>
#include <cfloat>
#include <cmath>
#include <cstdlib>
#include <limits>

typedef std::string	String;

void	printImpossible(void)
{
	std::cout
	<< "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: impossible" << std::endl
	<< "double: imposible" << std::endl;
}

void	castFromChar(const char *str)
{
	char	c = static_cast<char>(*str);
	std::cout << "char" << '\n';

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	castFromInt(const char *str)
{
	std::cout << "int" << std::endl;
	long long l = strtol(str, NULL, 10);
	
	if (errno == ERANGE || l < INT_MIN || l > INT_MAX)
	{
		printImpossible();
		return;
	}
	int			i = static_cast<int>(l);
	std::cout << "char: ";
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	castFromFloat(const char *str)
{
	double	d = strtod(str, NULL);

	if (errno == ERANGE || (!isinff(d) && (d < -FLT_MAX || d > FLT_MAX)))
	{
		printImpossible();
		return;
	}
	float	f = static_cast<float>(d);

	std::cout << "char: ";
	if (f < CHAR_MIN || f > CHAR_MAX || isnanf(f))
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
		
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX || isnanf(f))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
		
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return;
}

void	castFromDouble(const char *str)
{
	double	d = strtod(str, NULL);

	if (errno == ERANGE)
	{
		printImpossible();
		return;
	}
	std::cout << "char: ";
	if (d < CHAR_MIN || d > CHAR_MAX || isnanf(d))
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX || isnanf(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
		
	std::cout << std::setprecision(1) << std::fixed << "float: ";
	if (std::numeric_limits<double>().infinity() != d && (d < -FLT_MAX || d > FLT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return;
}

bool	isChar(const String& str)
{
	if (str[0] && !str[1] && !isdigit(str[0]))
		return true;
	return false;
}

bool	isInt(const String& str)
{
	if (str.empty())
		return false;
		
	char const*	s = str.c_str();
	char*		buf;
	long		l = strtol(s, &buf, 10);

	if (*s != 0)
		return false;
	if (errno == ERANGE && (l > INT_MAX || l < INT_MIN))
		return false;
	return true;
}

bool	isFloat(const String& str)
{
	int	i = 0;
	if (!str[i])
		return (false);
	while (isspace(str[i]))
		++i;
	if (str.substr(i) != "nanf")
		return true;
	if (str[i] == '+' || str[i] == '-')
		++i;
	if (str.substr(i) != "inff")
		return true;
	while (isdigit(str[i]))
		++i;
	if (str[i] == '.')
		++i;
	while (isdigit(str[i]))
		++i;
	if (str[i] != 'f' || str[i + 1])
		return false;
	return true;
}

bool	isDouble(const String& str)
{
	int	i = 0;
	if (!str[i])
		return (false);
	while (isspace(str[i]))
		++i;
	if (str.substr(i) != "nan")
		return true;
	if (str[i] == '+' || str[i] == '-')
		++i;
	if (str.substr(i) != "inf")
		return true;
	while (isdigit(str[i]))
		++i;
	if (str[i] == '.')
		++i;
	while (isdigit(str[i]))
		++i;
	if (str[i])
		return false;
	return true;
}

int	main(int ac, char **av) {

	char*	buf;
	
	if (ac != 2) {
		std::cerr << "Wrong number of arguments - There must be one" << std::endl;
		return 1;
	}

	if (isChar(av[1]))
		castFromChar(av[1]);
	else if (isInt(av[1]))
		castFromInt(av[1]);
	else if (isFloat(av[1]))
		castFromFloat(av[1]);
	else if (isDouble(av[1]))
		castFromDouble(av[1]);
	else {
		printImpossible();
		return 1;
	}
	return 0;
}