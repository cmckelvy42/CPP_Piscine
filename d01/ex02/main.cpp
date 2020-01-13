/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 15:15:58 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 15:38:30 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>

#include "ZombieEvent.hpp"
//#include "Zombie.hpp"

void	randomChump(void)
{
	std::string name[6] = {"Tom", "Jerry", "Paul", "Jenna", "Nicole", "Sarah"};
	Zombie zombie = Zombie(name[rand() % 6], "random");
	zombie.announce();
	return;
}

int		main(void)
{
	ZombieEvent event = ZombieEvent();
	Zombie	*Steve = event.setNewZombie("Steve");
	event.setZombieType("nonrandom");
	Zombie	*Jonathon = event.setNewZombie("Jonathon");
	Steve->announce();
	Jonathon->announce();
	delete Steve;
	delete Jonathon;
	srand(time(NULL));
	randomChump();
	randomChump();
	return (0);
}
