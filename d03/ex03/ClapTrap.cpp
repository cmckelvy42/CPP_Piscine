/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 11:06:30 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/12 19:18:30 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name)
{ std::cout << "ClapTrap constructed." << std::endl; }

ClapTrap::ClapTrap(const std::string name, unsigned int HP,
		unsigned int maxHP, unsigned int MP, unsigned int maxMP,
		unsigned int level, unsigned int meleeDmg, unsigned int rangedDmg,
		unsigned int armor) :
	_name(name), _HP(HP), _maxHP(maxHP), _MP(MP),
	_maxMP(maxMP), _level(level), _meleeDamage(meleeDmg),
	_rangedDamage(rangedDmg), _armor(armor)
{ std::cout << "ClapTrap constructed." << std::endl; }

ClapTrap::ClapTrap(void)
{ }

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap deconstructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
	return;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other.getName();
		_level = other.getLevel();
		_HP = other.getHP();
		_MP = other.getMP();
	}
	std::cout << "I'm tired of funny borderlands references, Claptrap = " << std::endl;
	return (*this);
}

std::string	ClapTrap::getName(void) const	{ return (_name); }
int			ClapTrap::getHP(void)	const	{ return (_HP); }
int			ClapTrap::getMP(void)	const	{ return (_MP); }
int			ClapTrap::getLevel(void)	const	{ return (_level); }

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " shoots " << target << ", causing "
		<< _rangedDamage << " points of damage !" << std::endl;
	std::cout << "Bang Bang" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " punched " << target << ", causing "
			<< _meleeDamage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= _armor;
	amount = _HP - (int)amount < 0 ? _HP : amount;
	_HP -= amount;
	std::cout << amount << " damage taken" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount > _maxHP - _HP ? _maxHP - _HP : amount;
	_HP += amount;
	std::cout << "Repaired " << amount << " health." << std::endl;
}