/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:42:19 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/24 23:25:23 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

#define PRINT(x) std::cout << x << std::endl;

Peon::Peon(void) : Victim()
{ std::cout << "Zog zog" << std::endl; }

Peon::Peon(std::string name) : Victim(name)
{ std::cout << "Zog zog" << std::endl; }

Peon::Peon(const Peon &cpy)
{
	*this = cpy;
	PRINT("Zog zog");
}

Peon::~Peon(void) { PRINT("Bleuark..."); }

void Peon::getPolymorphed(void) const
{ PRINT(_name << " has been turned into a pink pony !"); }