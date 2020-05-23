/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 11:05:34 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/19 11:39:19 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

#define PRINT(x) std::cout << x << std::endl;

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{ PRINT(name << ", " << title << ", is born!"); }

Sorcerer::Sorcerer(const Sorcerer &cpy)
{
	*this = cpy;
	PRINT(_name << ", " << _title << ", is born!");
}

Sorcerer::~Sorcerer(void)
{ PRINT(_name << ", " << _title << ", is dead. Consequences will never be the same!"); }

Sorcerer&	Sorcerer::operator = (const Sorcerer &old)
{
	_name = old.getName();
	_title = old.getTitle();
	return (*this);
}

std::string	Sorcerer::getName(void) const { return (_name); }
std::string	Sorcerer::getTitle(void) const{ return (_title); }
void		Sorcerer::polymorph(Victim const &v)	{ v.getPolymorphed(); }

std::ostream    &operator << (std::ostream &out, Sorcerer const &sorc)
{
	out << "I am " << sorc.getName() << ", " << sorc.getTitle() <<
		", and I like ponies!" << std::endl;
	return (out);
}