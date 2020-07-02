/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:29:04 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/30 15:35:45 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

#define PRINT(x) std::cout << x << std::endl;

		AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
			_name(name), _apcost(apcost), _damage(damage) { }

		AWeapon::AWeapon(const AWeapon &cpy)
		{ *this = cpy; }
		
		AWeapon::~AWeapon(void) { }
		
		AWeapon&	AWeapon::operator = (const AWeapon &old)
		{
			_name = old.getName();
			_apcost = old.getAPCost();
			_damage = old.getDamage();
			return (*this);
		}

		std::string const &	AWeapon::getName(void)		const { return (_name); }
		int					AWeapon::getAPCost(void)	const { return (_apcost); }
		int					AWeapon::getDamage(void)	const { return (_damage); }