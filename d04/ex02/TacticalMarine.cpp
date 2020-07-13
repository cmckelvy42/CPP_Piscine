/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:56:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/10 15:17:59 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>
#define PRINT(x) std::cout << x << std::endl;

TacticalMarine::TacticalMarine(void)
{ PRINT("Tactical Marine ready for battle!"); }

TacticalMarine::~TacticalMarine(void)
{ PRINT("Aaargh..."); }

TacticalMarine::TacticalMarine(const TacticalMarine &cpy)
{ 
	(void)cpy;
	PRINT("Tactical Marine ready for battle!"); 
}

TacticalMarine& TacticalMarine::operator = (const TacticalMarine &old)
{
	(void)old;
	return *this;
}

ISpaceMarine	*TacticalMarine::clone(void)	const
{ return (new TacticalMarine(*this)); }

void			TacticalMarine::battleCry(void) const
{ PRINT("For the holy PLOT!"); }
void			TacticalMarine::rangedAttack(void) const
{ PRINT("* attacks with a bolter *"); }
void			TacticalMarine::meleeAttack(void) const
{ PRINT("* attacks with a chainsword *"); }