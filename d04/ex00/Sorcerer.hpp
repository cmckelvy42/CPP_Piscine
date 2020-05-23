/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:54:17 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/19 11:38:50 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Peon.hpp"

class Sorcerer
{
private:
	std::string	_name;
	std::string	_title;
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &cpy);
	~Sorcerer(void);

	Sorcerer&	operator = (const Sorcerer &old);

	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(Victim const &);
};

std::ostream&	operator << (std::ostream &output, Sorcerer const &sorc);

#endif