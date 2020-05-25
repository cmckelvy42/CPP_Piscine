/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:03:02 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/18 11:39:59 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <ctime>

class ClapTrap
{
	protected:
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
		ClapTrap(std::string name);
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &other);
		ClapTrap&  operator = (const ClapTrap &other);
		
		std::string	getName(void) const;
		int			getHP(void) const;
		int			getMP(void) const;
		int			getLevel(void) const;
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
#endif