/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:46:11 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/09 17:59:19 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

bool 	is_dir(const char * path)
{
	struct stat buf;
	stat(path, &buf);
	return (S_ISDIR(buf.st_mode));
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		for (std::string s;std::getline(std::cin, s);)
			std::cout << s << std::endl;
	}
	else
	{
		std::fstream fd;
		for (int i = 0; i < argc; i++)
		{
			if (is_dir(argv[i]))
				std::cout << "cato9tails: " << argv[i] << ": is a directory" << std::endl;
			else
			{
				for (std::string s; std::getline(fd, s);)
					std::cout << s << std::endl;
				fd.close();
			}
			
		}
	}
	return (0);
}
