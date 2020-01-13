/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 15:52:40 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 16:44:34 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie	*_horde;
		int		_num;
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

		void	announce(void);
		Zombie&	createRand(void);
};
#endif
