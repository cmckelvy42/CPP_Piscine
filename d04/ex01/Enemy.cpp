/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:29:04 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/30 14:44:16 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

#define PRINT(x) std::cout << x << std::endl;

		Enemy::Enemy(int hp, std::string const & type) :
			_hp(hp), _type(type) { }

		Enemy::Enemy(const Enemy &cpy)
		{ *this = cpy; }
		
		Enemy::~Enemy(void) { }
		
		Enemy&	Enemy::operator = (const Enemy &old)
		{
			_hp = old.getHP();
			_type = old.getType();
			return (*this);
		}

		std::string	const & Enemy::getType(void)	const 
		{ return (_type); }
		
		int					Enemy::getHP(void)	const 
		{ return (_hp); }

		void	Enemy::takeDamage(int dmg)
		{
			if (dmg < 0)
				dmg = 0;
			_hp = _hp - dmg > 0 ? _hp - dmg : 0; 
		}