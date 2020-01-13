/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 14:26:53 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/12/28 19:19:07 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "person.hpp"
#include <iomanip>
#include <string>

#define CLEAR_CIN std::cin.clear();std::cin.ignore(10000, '\n')
#define CIN_CHECK(x) if (x) CLEAR_CIN

bool    person::exists(void) {return (first != "");}

void    person::addPerson(void)
{
    std::cout << "First Name: "; std::getline(std::cin, first);
    std::cout << "Last Name: "; std::getline(std::cin, last);
    std::cout << "Nickname: "; std::getline(std::cin, nick);
    std::cout << "Login: "; std::getline(std::cin, login);
    std::cout << "Address: "; std::getline(std::cin, login);
    while(true)
    {
        std::cout << "Email: "; std::getline(std::cin, email);
        if (email.find('@') != email.npos && email.find('.') != email.npos)
            break;
    }
    while(true)
    {
        std::cout << "Phone Number: "; std::getline(std::cin, phone);
        if (phone.find_first_not_of("0123456789") == phone.npos)
            break;
    }
    do {
        std::cout << "Birth Month: ";
        CIN_CHECK(!(std::cin >> bmonth));
    } while (bmonth < 1 || bmonth > 12);
	do {
		std::cout << "Birth Day: ";
		CIN_CHECK(!(std::cin >> bday));
	} while (bday < 1 || bday > 31 || (bmonth == 2 && bday > 29));
	do {
		std::cout << "Birth Year: ";
		CIN_CHECK(!(std::cin >> byear));
	} while (byear < 1900 || byear > 2020);
	std::cout << "Favorite Meal: "; std::getline(std::cin, meal);
	std::cout << "Underwear Color: "; std::getline(std::cin, color);
	std::cout << "Darkest Secret: "; std::getline(std::cin, secret);
}

std::string	fixWidth(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void        person::showIndex(int i)
{
    std::cout << std::right << std::setfill(' ') << std::setw(10)
        << i << "|";
    std::cout << std::right << std::setfill(' ') << std::setw(10)
        << fixWidth(first) << '|';
    std::cout << std::right << std::setfill(' ') << std::setw(10)
        << fixWidth(last) << '|';
    std::cout << std::right << std::setfill(' ') << std::setw(10)
        << fixWidth(nick) << '|';
    std::cout << std::endl;
}

void        person::showPerson(void)
{
    std::cout << "First Name: " << first << std::endl;
	std::cout << "Last Name: " << last << std::endl;
	std::cout << "Nickname: " << nick << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Phone: " << phone << std::endl;
	std::cout << "Birthday: " << bmonth << "/" << bday << "/" << byear << std::endl;
	std::cout << "Favorite Meal: " << meal << std::endl;
	std::cout << "Underwear Color: " << color << std::endl;
	std::cout << "Secret: " << secret << std::endl;
}