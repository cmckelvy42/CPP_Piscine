/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 16:26:17 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/09 16:37:00 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char** argv)
{
	if (argc == 4)
	{
		std::string	name = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		std::ifstream is(name);
		if (!is)
		{
			std::cout << name << " does not exist." << std::endl;
			return (-1);
		}
		std::ofstream os(name + ".replace");
		if (!os) return (-2);

		std::string	s;
		while (std::getline(is, s))
		{
			for (size_t i = s.find(s1); i != std::string::npos; i = s.find(s1, i))
				s.replace(i, s1.length(), s2);
			os << s << std::endl;
		}
	}
	else
		std::cout << "Usage: ./replace <file> <string1> <string2>" << std::endl;
	return (0);
}