/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:30:24 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 17:35:31 by cmckelvy         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);
		void	setType(std::string type);
};
#endif