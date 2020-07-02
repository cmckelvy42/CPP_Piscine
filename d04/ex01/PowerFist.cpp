/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:53:06 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/30 14:55:17 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) { }
PowerFist::PowerFist(const PowerFist &cpy) : AWeapon(cpy) { }
PowerFist::~PowerFist(void) { }

void	PowerFist::attack(void) const
{
	std::cout << "“* pschhh... SBAM! *" << std::endl;
}