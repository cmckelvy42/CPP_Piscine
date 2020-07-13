/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:56:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/10 15:03:49 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>
#define PRINT(x) std::cout << x << std::endl;

AssaultTerminator::AssaultTerminator(void)
{ PRINT("* teleports from space *"); }

AssaultTerminator::~AssaultTerminator(void)
{ PRINT("I’ll be back..."); }

AssaultTerminator::AssaultTerminator(const AssaultTerminator &cpy)
{ 
	(void)cpy;
	PRINT("* teleports from space *"); 
}

AssaultTerminator& AssaultTerminator::operator = (const AssaultTerminator &old)
{
	(void)old;
	return *this;
}

ISpaceMarine	*AssaultTerminator::clone(void)	const
{ return (new AssaultTerminator(*this)); }

void			AssaultTerminator::battleCry(void) const
{ PRINT("This code is unclean. PURIFY IT!"); }
void			AssaultTerminator::rangedAttack(void) const
{ PRINT( "* does nothing *"); }
void			AssaultTerminator::meleeAttack(void) const
{ PRINT( "* attacks with chainfists *"); }