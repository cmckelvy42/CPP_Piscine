/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:03:38 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/30 15:36:31 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		int 		_ap;
		std::string _name;
		AWeapon*	_weapon;

	public:
		Character(void);
		Character(std::string const & name);
		Character(std::string const & name, AWeapon *weapon);
		Character(const Character &cpy);
		~Character();

		Character&	operator = (const Character &old);
		
		void 				recoverAP(void);
		void 				equip(AWeapon* weapon);
		void 				attack(Enemy* enemy);
		std::string const & getName() const;
		int 				getAP(void) const;
		AWeapon*			getWeapon(void) const;
};
std::ostream    &operator << (std::ostream &lhs, Character const &rhs);

#endif