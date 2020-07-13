/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:58:59 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/12 17:35:34 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) { }
AMateria::AMateria(const AMateria &cpy) { *this = cpy; }
AMateria::AMateria(void) { }

AMateria&	AMateria::operator = (const AMateria &old)
{
	this->_xp = old.getXP();
	this->_type = old.getType();
	return (*this);
}

std::string const & AMateria::getType() const { return (_type); } //Returns the materia type
unsigned int AMateria::getXP() const { return (_xp); } //Returns the Materia's XP

void	AMateria::use(ICharacter & target)
{
	(void)target;
	_xp += 10;
}