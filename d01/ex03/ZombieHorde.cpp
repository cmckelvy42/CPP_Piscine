/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 16:36:17 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 17:39:11 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <stdlib.h>
#include <time.h>

ZombieHorde::ZombieHorde(int n) : _num(n)
{
	_horde = new Zombie[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		_horde[i] = createRand();
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] _horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _num; i++)
		_horde[i].announce();
	return;
}

Zombie&	ZombieHorde::createRand(void)
{
	std::string name[6] = {"Tom", "Jerry", "Paul", "Jenna", "Nicole", "Sarah"};
	Zombie *zombie = new Zombie;
	zombie->setName(name[rand() % 6]);
	zombie->setType("horde");
	return (*zombie);
}