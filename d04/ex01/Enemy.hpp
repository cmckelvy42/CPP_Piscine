/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:03:38 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/08 18:26:06 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	protected:
		int 		_hp;
		std::string _type;

	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &cpy);
		virtual ~Enemy() {};

		Enemy&	operator = (const Enemy &old);
		
		std::string const & getType() const;
		int getHP() const;
		virtual void takeDamage(int dmg);
};
#endif