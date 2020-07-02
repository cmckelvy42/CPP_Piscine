/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 19:16:47 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/12 19:31:27 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5),
	FragTrap(name), NinjaTrap(name)
{
	std::cout << "SUUUUUUUPPPPPPEERRRR TRAPPPPP" << std::endl;
}

SuperTrap::SuperTrap(void) { }
SuperTrap::~SuperTrap(void) { std::cout << "My job is done" << std::endl; }
SuperTrap::SuperTrap(const SuperTrap &cpy) : ClapTrap(cpy), FragTrap(cpy), NinjaTrap(cpy)
{ *this = cpy; }

SuperTrap&	SuperTrap::operator = (const SuperTrap &old)
{
	_HP = old.getHP();
	_maxHP = 100;
	_MP = NinjaTrap::getMP();
	_maxMP = 120;
	_level = old.getLevel();
	_meleeDamage = old.getMeleeDamage();
	_rangedDamage = old.getRangedDamage();
	_armor = old.getArmor();
	_name = old.getName();
	std::cout << "I'M NOT OLD" << std::endl;
	return (*this);
}