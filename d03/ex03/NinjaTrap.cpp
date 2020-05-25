/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 18:00:46 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/24 18:14:26 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_HP = 60;
	_maxHP = 60;
	_MP = 120;
	_maxMP = 120;
	_level = 1;
	_meleeDamage = 60;
	_rangedDamage = 5;
	_armor = 0;
	std::cout << "Nin nin" << std::endl;
}
NinjaTrap::NinjaTrap(void) { }
NinjaTrap::NinjaTrap(const NinjaTrap &cpy) : ClapTrap(cpy) { *this = cpy; }
NinjaTrap::~NinjaTrap(void) { std::cout << "I vanish into the darkness" << std::endl; }

NinjaTrap&	NinjaTrap::operator = (const NinjaTrap &other)
{
	if (this != &other)
		_name = other.getName();
		_level = other.getLevel();
		_HP = other.getHP();
		_MP = other.getMP();
	std::cout << "Seeing double!" << std::endl;
	return (*this);
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target)
{ std::cout << target.getName() << " finds a mirror in the shoebox" << std::endl; }

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{ std::cout << target.getName() << " finds a grenade in the shoebox" << std::endl; }

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{ std::cout << target.getName() << " finds a bug in the shoebox" << std::endl; }

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{ std::cout << target.getName() << " finds nothing in the shoebox" << std::endl; }
