/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:44:40 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/08 18:21:10 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(const RadScorpion &cpy);
		~RadScorpion(void);
		
		using Enemy::operator=;
};
#endif