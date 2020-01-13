/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:35:32 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 15:00:08 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << _name << " has been reanimated" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " has been defeated" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..."
		<< std::endl;
	return;
}