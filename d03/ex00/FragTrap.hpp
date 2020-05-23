/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:03:02 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/10 20:51:11 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>

class FragTrap
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
		FragTrap(std::string name);
		FragTrap(void);
		~FragTrap(void);
		FragTrap(const FragTrap &other);
		FragTrap&  operator = (const FragTrap &other);
		
		std::string	getName(void) const;
		int			getHP(void) const;
		int			getMP(void) const;
		int			getLevel(void) const;
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);
};
#endif