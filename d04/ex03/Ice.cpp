/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:58:59 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/12 15:09:07 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#define PRINT(x) std::cout << x << std::endl

Ice::Ice(void) : AMateria("ice") { }
Ice::Ice(const Ice &cpy) : AMateria(cpy) { }
Ice::~Ice(void) { }


Ice&	Ice::operator = (const Ice &old)
{
	this->_xp = old.getXP();
	return (*this);
}

AMateria* Ice::clone(void) const
{
	AMateria* clone = new Ice();
	return (clone);
}

void				Ice::use(ICharacter & target)
{
	PRINT("* shoots an ice bolt at " << target.getName() << " *"); 
	AMateria::use(target);
}