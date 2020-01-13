/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 13:47:04 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/12/28 14:01:51 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	str_toupper(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int			main(int argc, char **argv)
{
	if (argc > 1)
		for (int i = 1; i < argc; i++)
			std::cout << str_toupper(argv[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}