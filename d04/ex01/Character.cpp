/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:29:04 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/30 14:44:16 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#define PRINT(x) std::cout << x << std::endl;

Character::Character(std::string const & name) :
	_ap(40), _name(name), _weapon(NULL) { }

Character::Character(std::string const & name, AWeapon *weapon) :
	_ap(40), _name(name), _weapon(weapon) { }

Character::Character(const Character &cpy)
{ *this = cpy; }
		
Character::~Character(void) { }
		
Character&	Character::operator = (const Character &old)
{
	_ap = old.getAP();
	_name = old.getName();
	_weapon = old.getWeapon();
	return (*this);
}

std::string	const & Character::getName(void)	const 
	{ return (_name); }
		
int					Character::getAP(void)	const 
	{ return (_ap); }
		
AWeapon*			Character::getWeapon(void) const
	{ return (_weapon); }

void				Character::recoverAP(void)
	{ _ap = 40 - _ap > 10 ? _ap + 10 : 40; }

void 				Character::equip(AWeapon* weapon)
	{ _weapon = weapon; }

void				Character::attack(Enemy* enemy)
	{
		if (_weapon == NULL || enemy == NULL)
			return ;
		if (_ap < _weapon->getAPCost())
			return ;
		PRINT(_name << " attacks " << enemy->getType() << " with a " << _weapon->getName());
		_weapon->attack();
		_ap -= _weapon->getAPCost();
			if (_ap < 0)
				_ap = 0;
		enemy->takeDamage(_weapon->getDamage());	
		if (enemy->getHP() <= 0)
			delete enemy;
	}

std::ostream		&operator << (std::ostream &lhs, Character const &rhs)
{
	if (rhs.getWeapon())
		lhs << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		lhs << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	
	return (lhs);
}