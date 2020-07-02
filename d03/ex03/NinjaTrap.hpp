/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 17:57:12 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/12 19:30:10 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(void);
		~NinjaTrap(void);
		NinjaTrap(const NinjaTrap &cpy);
		NinjaTrap&  operator = (const NinjaTrap &other);
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	beRepaired(unsigned int amount);
		int		getMP(void) const;
		int		getMeleeDamage(void) const;
		void	ninjaShoebox(ClapTrap const & target);
		void	ninjaShoebox(FragTrap const & target);
		void	ninjaShoebox(ScavTrap const & target);
		void	ninjaShoebox(NinjaTrap const & target);
};
#endif