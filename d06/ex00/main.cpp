/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:48:01 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/22 17:20:33 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <iostream>

#define PRINT(x) std::cout << x << std::endl

int getPrecision(char* str)
{
    size_t    before;
    size_t     after;

    before = 0;
    while (str[before] && str[before] != '.')
        before++;
    after = before + 1;
    while (str[after] && isdigit(str[after]))
        after++;
    after -= before;
    return ((strlen(str) == before || after == 1) ? 1 : after);
}

void	printChar(double d)
{
	std::cout << "char: ";

	if (std::isnan(d))
		PRINT("impossible");
	else if (!isprint(static_cast<int>(d)))
		PRINT("Non displayable");
	else
		PRINT(static_cast<char>(d));
}

void	printInt(double d)
{
	std::cout << "int: ";
	if (d > INT_MAX || d < INT_MIN || std::isnan(d))
		PRINT("impossible");
	else
		PRINT(static_cast<int>(d));
}

void	printFloat(double d, int precision)
{
	std::cout << "float: ";
	if (floor(d) == d)
		PRINT(static_cast<float>(d) << ".0" << "f");
	else
		PRINT(std::setprecision(precision) << static_cast<float>(d) << "f");
}

void	printDouble(double d, int precision)
{
	std::cout << "double: ";
	if (floor(d) == d)
		PRINT(d << ".0");
	else
		PRINT(std::setprecision(precision) << d);
}

void	convert(std::string val, int precision)
{
	double d;
	try
	{
		d = std::stod(val);
	}
	catch(const std::exception& e)
	{
		std::cerr << "invalid argument" << std::endl;
		return ;
	}
	
	
	printChar(d);
	printInt(d);
	printFloat(d, precision);
	printDouble(d, precision);
}

int	 main(int argc, char **argv)
{
	if (argc == 2)
	{
		int precision = getPrecision(argv[1]);
		convert(argv[1], precision);
	}
	else
		PRINT("usage: ./convert [char / int / float / double]");
	return (0);
}