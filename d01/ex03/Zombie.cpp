/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:35:32 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 17:42:26 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) { }

Zombie::~Zombie(void) { }

void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..."
		<< std::endl;
	return;
}

void	Zombie::setName(std::string name) { _name = name; }

void	Zombie::setType(std::string type) { _type = type; }