/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:44:21 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 15:01:36 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class	ZombieEvent
{
	private:
		std::string	_type;
	
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string type);
		Zombie*	setNewZombie(std::string name);
};
#endif