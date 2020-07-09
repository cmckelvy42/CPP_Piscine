/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:53:06 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/08 18:06:54 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

#define PRINT(x) std::cout << x << std::endl

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") 
{ PRINT("Gaaah. Me want smash heads !"); }

SuperMutant::SuperMutant(const SuperMutant &cpy) : Enemy(cpy) 
{ PRINT("Gaaah. Me want smash heads !"); }
SuperMutant::~SuperMutant(void) 
{ PRINT("Aaargh..."); }

void	SuperMutant::takeDamage(int dmg)
		{
			dmg -= 3;
			if (dmg < 0 && _hp)
				dmg = 0;
			_hp = _hp - dmg > 0 ? _hp - dmg : 0;
		}

