/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:53:39 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 15:36:38 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void)
{
	_type = "default";
}

ZombieEvent::~ZombieEvent(void) { }

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie*	ZombieEvent::setNewZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, _type);
	return (zombie);
}