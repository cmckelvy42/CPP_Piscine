/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 19:27:21 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 19:46:11 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain(void){ }

Brain::~Brain(void){ }

void		Brain::setThoughts(std::string thoughts){ _thoughts = thoughts; }

std::string	Brain::identify(void)
{
	std::ostringstream	addr;
	addr << this;
	return (addr.str());
}