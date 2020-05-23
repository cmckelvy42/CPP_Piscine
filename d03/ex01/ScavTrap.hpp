/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:03:02 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/13 15:24:23 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>

class ScavTrap
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
		ScavTrap(std::string name);
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &other);
		ScavTrap&  operator = (const ScavTrap &other);
		
		std::string	getName(void) const;
		int			getHP(void) const;
		int			getMP(void) const;
		int			getLevel(void) const;
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const & target);
};
#endif