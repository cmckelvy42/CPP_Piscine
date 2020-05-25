/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 19:16:47 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/24 19:22:29 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	_name = name;
	_HP = FragTrap::getHP();
	_maxHP = _HP;
	_MP = NinjaTrap::getMP();
	_maxMP = _MP;
	_level = 1;
	_meleeDamage = NinjaTrap::getMeleeDamage();
	_rangedDamage = FragTrap::getRangedDamage();
	_armor = FragTrap::getArmor();
	std::cout << "SUUUUUUUPPPPPPEERRRR TRAPPPPP" << std::endl;
}

SuperTrap::SuperTrap(void) { }
SuperTrap::SuperTrap(const SuperTrap &cpy) : FragTrap(cpy), NinjaTrap(cpy)
{ *this = cpy; }
SuperTrap::~SuperTrap(void) { std::cout << "My job is done" << std::endl; }

SuperTrap&	SuperTrap::operator = (const SuperTrap &old)
{
	_name = old.getName();
	_HP = old.getHP();
	_MP = old.getMP();
	_level = old.getLevel();
	std::cout << "I'M NOT OLD" << std::endl;
	return (*this);
}