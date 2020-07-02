/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 11:28:28 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/24 18:30:41 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
	std::string _name;

public:
	Victim(void);
	Victim(std::string name);
	Victim(const Victim &cpy);
	~Victim(void);

	Victim&	operator = (const Victim &old);

	std::string	getName(void) const;
	void		getPolymorphed(void) const;
};

std::ostream    &operator << (std::ostream &out, Victim const &vic);
#endif