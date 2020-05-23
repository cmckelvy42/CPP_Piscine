/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:34:06 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/09 17:39:23 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{ std::cout << target << " has been slapped" << std::endl; }

void	Human::rangedAttack(std::string const & target)
{ std::cout << target << " has been shot" << std::endl; }

void	Human::intimidatingShout(std::string const & target)
{ std::cout << target << " is intimidated" << std::endl; }

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string	list[3] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};
	void (Human::*actions[3])(std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout,
	};
	for (int i = 0; i < 3; i++)
		if (list[i] == action_name)
		{
			(this->*(actions[i]))(target);
			return;
		}
}