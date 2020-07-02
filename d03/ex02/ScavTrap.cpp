/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:39:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/12 19:35:57 by cmckelvy         ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
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

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{ *this = other; }

ScavTrap&	ScavTrap::operator = (const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other.getName();
		_level = other.getLevel();
		_HP = other.getHP();
		_MP = other.getMP();
	}
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
