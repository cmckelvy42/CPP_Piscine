/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 19:49:14 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 20:09:37 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{
private:
	Brain	_brain;
public:
	Human(void);
	~Human(void);
	
	Brain		getBrain(void);
	std::string	identify(void);
};
#endif