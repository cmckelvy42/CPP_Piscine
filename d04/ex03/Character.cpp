/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:33:48 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/12 16:49:37 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const name) : _name(name)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}
Character::Character(void) : Character("DefaultName") { }

Character::Character(const Character &cpy)
{ *this = cpy; }

Character::~Character(void)
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

Character&	Character::operator = (const Character &old)
{
	_name = old.getName();
	for (int i = 0; i < INV_CAPACITY; ++i)
		_inventory[i] = old.getInventory(i);
	return (*this);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INV_CAPACITY)
		_inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INV_CAPACITY)
		if (_inventory[idx])
		{
			std::cout << _name << " ";
			_inventory[idx]->use(target);
		}
}

AMateria* Character::getInventory(int idx) const
{ return (_inventory[idx]); }
std::string const &	Character::getName(void)	const { return (_name); }
