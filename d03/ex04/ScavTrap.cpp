/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:39:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/18 12:33:31 by cmckelvy         ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_HP = 100;
	_maxHP = 100;
	_MP = 50;
	_maxMP = 50;
	_level = 1;
	_meleeDamage = 20;
	_rangedDamage = 15;
	_armor = 3;
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
	std::cout << "I am so impressed with myself!" << std::endl;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	ClapTrap::rangedAttack(target);
	std::cout << "Bang Bang" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	ClapTrap::meleeAttack(target);
	std::cout << "Bash!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	if (_HP == 0)
		std::cout << "Robot down!" << std::endl;
	else
		std::cout << "Not dead yet" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << "I feel MUCH better!" << std::endl;
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
