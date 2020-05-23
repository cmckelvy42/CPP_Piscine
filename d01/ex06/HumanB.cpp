/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:32:39 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/09 15:40:38 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) { } ;
HumanB::~HumanB(void) { };

void	HumanB::attack(void)
{ std::cout << _name << " attacks with his " << _weapon->getType() << std::endl; }

void	HumanB::setWeapon(Weapon& weapon)
{ _weapon = &weapon; }