/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:39:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/18 11:19:40 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#define ATTACK_EXE { "Funzerker",\
					"Meat Unicycle",\
					"Mechromagician",\
					"Senseless Sacrifice",\
					"Clap-in-the-Box"}
#define ATTACK_NUM 5

FragTrap::FragTrap(std::string name) : _name(name), _HP(100), _maxHP(100), _MP(100),\
									   _maxMP(100), _level(1), _meleeDamage(30), _rangedDamage(20), _armor(5)
{
	std::cout << "Recompiling my combat code!" << std::endl;
	srand(time(NULL));
}
FragTrap::FragTrap(void)
{ }

FragTrap::~FragTrap()
{
	std::cout << "Default deconstructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

FragTrap&	FragTrap::operator = (const FragTrap &other)
{
	if (this != &other)
		_name = other.getName();
		_level = other.getLevel();
		_HP = other.getHP();
		_MP = other.getMP();
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	return (*this);
}

std::string	FragTrap::getName(void) const	{ return (_name); }
int			FragTrap::getHP(void)	const	{ return (_HP); }
int			FragTrap::getMP(void)	const	{ return (_MP); }
int			FragTrap::getLevel(void)	const	{ return (_level); }

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " shoots " << target << ", causing "
		<< _rangedDamage << " points of damage !" << std::endl;
	std::cout << "Bang!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << _name << " punched" << target << ", causing "
			<< _meleeDamage << " points of damage !" << std::endl;
	std::cout << "Bop!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount -= _armor;
	amount = _HP - (int)amount < 0 ? _HP : amount;
	_HP -= amount;
	if (_HP == 0)
		std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	else
		std::cout << "Why do I even feel pain?!" << std::endl;
	std::cout << amount << " damage taken" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	amount = amount > _maxHP - _HP ? _maxHP - _HP : amount;
	_HP += amount;
	std::cout << "Repaired " << amount << "health.";
	std::cout << "All patched up!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[] = ATTACK_EXE;
	
	if (_MP >= 25)
	{
		std::cout << "vaulthunter.exe activates " << attacks[rand() % ATTACK_NUM] << "on " << target << std::endl;
		_MP -= 25;
	}
	else
		std::cout << "not enough energy!" << std::endl;	
}
