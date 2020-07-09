/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:44:40 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/08 18:20:44 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(const SuperMutant &cpy);
		~SuperMutant(void);
		
		using Enemy::operator=;

		void 	takeDamage(int dmg);
};
#endif