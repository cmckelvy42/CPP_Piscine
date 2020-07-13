/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 17:23:03 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/12 17:30:01 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{ *this = cpy; }

MateriaSource::~MateriaSource(void)
{
		for (int i = 0; i < INV_CAPACITY; ++i)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

MateriaSource&	MateriaSource::operator = (const MateriaSource &old)
{
	for (int i = 0; i < INV_CAPACITY; ++i)
		_inventory[i] = old.getInventory(i);
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < INV_CAPACITY; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}
AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INV_CAPACITY; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (NULL);
}

AMateria* MateriaSource::getInventory(int idx) const
{ return (_inventory[idx]); }