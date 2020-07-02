/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:03:02 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/12 19:22:47 by cmckelvy         ###   ########.fr       */
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
		std::string	_name;
		int			_HP;
		int			_maxHP;
		int			_MP;
		int			_maxMP;
		int			_level;
		int			_meleeDamage;
		int			_rangedDamage;
		int			_armor;
	
	public:
		ClapTrap(std::string name);
		ClapTrap(const std::string name, unsigned int HP,
		unsigned int maxHP, unsigned int MP, unsigned int maxMP,
		unsigned int level, unsigned int meleeDmg, unsigned int rangedDmg,
		unsigned int armor);
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