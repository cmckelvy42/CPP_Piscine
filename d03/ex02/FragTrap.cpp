/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:39:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/18 12:32:32 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define ATTACK_EXE { "Funzerker",\
					"Meat Unicycle",\
					"Mechromagician",\
					"Senseless Sacrifice",\
					"Clap-in-the-Box"}
#define ATTACK_NUM 5

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_HP = 100;
	_maxHP = 100;
	_MP = 100;
	_maxMP = 100;
	_level = 1;
	_meleeDamage = 30;
	_rangedDamage = 20;
	_armor = 5;
	std::cout << "Recompiling my combat code!" << std::endl;
	srand(time(NULL));
}
FragTrap::FragTrap(void)
{ }

FragTrap::~FragTrap()
{ std::cout << "Default FragTrap deconstructor called" << std::endl; }

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{ *this = other; }

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

void	FragTrap::rangedAttack(std::string const & target)
{
	ClapTrap::rangedAttack(target);
	std::cout << "Bang!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	ClapTrap::meleeAttack(target);
	std::cout << "Bop!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	if (_HP == 0)
		std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	else
		std::cout << "Why do I even feel pain?!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << "Ha ha ha! I LIVE! Hahaha!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[] = ATTACK_EXE;
	
	if (_MP >= 25)
	{
		std::cout << "vaulthunter.exe activates " << attacks[rand() % ATTACK_NUM] << " on " << target << std::endl;
		_MP -= 25;
	}
	else
		std::cout << "not enough energy!" << std::endl;	
}
