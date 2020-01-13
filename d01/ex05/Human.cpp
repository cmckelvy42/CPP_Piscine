/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 20:07:29 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 20:11:03 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){ }

Human::~Human(void){ }

Brain		Human::getBrain(void){ return (this->_brain); }

std::string	Human::identify(void){ return (this->_brain.identify()); }