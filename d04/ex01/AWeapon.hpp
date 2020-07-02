/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:17:57 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/25 17:28:53 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
	protected:
		std::string _name;
		int			_apcost;
		int			_damage;
	
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &cpy);
		virtual ~AWeapon(void);
		
		AWeapon&	operator = (const AWeapon &old);

		std::string const &	getName(void)	const;
		int					getAPCost(void)	const;
		int					getDamage(void)	const;

		virtual void 		attack()	const = 0;


};
#endif