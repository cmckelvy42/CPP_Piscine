/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:30:24 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 14:59:56 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
	private:
		std::string _name;
		std::string _type;

	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);

		void	announce(void);
};
#endif