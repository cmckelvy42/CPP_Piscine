/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:39:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/18 12:28:51 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

#define CHAL_EXE  { "Shoot the moon down",\
					"Dance until the end of time",\
					"Collect all the dragon balls",\
					"Donate to my gambling addiction",\
					"Backup your memory"}
#define CHAL_NUM 5

ScavTrap::ScavTrap(std::string name) : _name(name), _HP(100), _maxHP(100), _MP(50),\
									   _maxMP(50), _level(1), _meleeDamage(20), _rangedDamage(15), _armor(3)
{
	std::cout << "Hey everybody! Check out my package!" << std::endl;
	srand(time(NULL));
}
ScavTrap::ScavTrap(void)
{ }

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap deconstructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
	return;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap &other)
{
	if (this != &other)
		_name = other.getName();
		_level = other.getLevel();
		_HP = other.getHP();
		_MP = other.getMP();
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	return (*this);
}

std::string	ScavTrap::getName(void) const	{ return (_name); }
int			ScavTrap::getHP(void)	const	{ return (_HP); }
int			ScavTrap::getMP(void)	const	{ return (_MP); }
int			ScavTrap::getLevel(void)	const	{ return (_level); }

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " shoots " << target << ", causing "
		<< _rangedDamage << " points of damage !" << std::endl;
	std::cout << "Bang Bang" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << _name << " punched" << target << ", causing "
			<< _meleeDamage << " points of damage !" << std::endl;
	std::cout << "Bash!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount -= _armor;
	amount = _HP - (int)amount < 0 ? _HP : amount;
	_HP -= amount;
	if (_HP == 0)
		std::cout << "Robot down!" << std::endl;
	else
		std::cout << "Not dead yet" << std::endl;
	std::cout << amount << " damage taken" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	amount = amount > _maxHP - _HP ? _maxHP - _HP : amount;
	_HP += amount;
	std::cout << "I feel MUCH better!" << std::endl;
	std::cout << "Repaired " << amount << "health.";
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[] = CHAL_EXE;
	
	if (_MP >= 25)
	{
		std::cout << target << ", " << challenges[rand() % CHAL_NUM] << std::endl;
		_MP -= 25;
	}
	else
		std::cout << "not enough energy!" << std::endl;	
}
