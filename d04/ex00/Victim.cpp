/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:46:18 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/24 19:17:30 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("defaultName")
{ std::cout << "Some random victim called " << _name << " just appeared!" << std::endl; }
Victim::Victim(std::string name) : _name(name)
{ std::cout << "Some random victim called " << name << " just appeared!" << std::endl; }

Victim::~Victim(void)
{ std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl; }

Victim::Victim(const Victim &cpy)
{
	*this = cpy;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim&	Victim::operator = (const Victim &old)
{
	_name = old.getName();
	return (*this);
}

std::string	Victim::getName(void) const
{ return (_name); }

void		Victim::getPolymorphed(void) const
{ std::cout << _name << " has been turned into a cute little sheep!" << std::endl; }

std::ostream    &operator << (std::ostream &out, Victim const &vic)
{
	out << "I am " << vic.getName() << ", and I like otters!" << std::endl;
	return (out);
}