/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 18:57:50 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/24 19:35:18 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		int			_HP;
		int			_maxHP;
		int			_MP;
		int			_maxMP;
		int			_level;
		std::string	_name;
		int			_meleeDamage;
		int			_rangedDamage;
		int			_armor;
	
	public:
		SuperTrap(std::string name);
		SuperTrap(void);
		~SuperTrap(void);
		SuperTrap(const SuperTrap &cpy);
		
		SuperTrap&	operator = (const SuperTrap &old);
		using	NinjaTrap::meleeAttack;
		using	FragTrap::rangedAttack;
		using	FragTrap::getHP;
		using	NinjaTrap::getMP;
		using	NinjaTrap::getMeleeDamage;
		using	FragTrap::getRangedDamage;
		using	FragTrap::getArmor;
};
#endif