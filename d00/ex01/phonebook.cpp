/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:37:49 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/13 10:58:45 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

void    displayIndex(Person people[8])
{

	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < 8 && people[i].exists(); i++)
		people[i].showIndex(i);
}

int     getIndex(Person people[8])
{
	int choice = -1;

	do {
		std::cout << "Index Search: ";
		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			choice = -1;
		}
	} while (choice < 0 || choice > 7 || !people[choice].exists());
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	return (choice);
}

int     main(void)
{
	std::string cmd;
	Person      people[8];
	int         i = 0;

	std::cout << "Accessing Phonebook..." << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	do {
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			people[i].addPerson();
			i += (i == 7 ? -7 : 1);
		}
		else if (cmd == "SEARCH")
		{
			if (people[0].exists())
			{
				displayIndex(people);
				people[getIndex(people)].showPerson();
			}
			else
				std::cout << "The phonebook is empty" << std::endl;      
		}
		else
			std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	} while (cmd != "EXIT");
	std::cout << "Closing phonebook..." << std::endl;
	return (0);
}