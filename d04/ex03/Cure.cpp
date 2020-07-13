/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:58:59 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/12 15:09:07 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#define PRINT(x) std::cout << x << std::endl

Cure::Cure(void) : AMateria("cure") { }
Cure::Cure(const Cure &cpy) : AMateria(cpy) { }
Cure::~Cure(void) { }

Cure&	Cure::operator = (const Cure &old)
{
	this->_xp = old.getXP();
	return (*this);
}

AMateria* Cure::clone(void) const
{
	AMateria* clone = new Cure();
	return (clone);
}

void				Cure::use(ICharacter & target)
{
	PRINT("* heals " << target.getName() << "'s wounds *"); 
	AMateria::use(target);
}