/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:43:46 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/12 16:54:10 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	AMateria(void);
	AMateria(const AMateria &cpy);
	virtual ~AMateria(void) = default;

	AMateria&	operator = (const AMateria &old);
	
	std::string const & getType(void) const; //Returns the materia type
	unsigned int getXP(void) const; //Returns the Materia's XP
	
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};
#endif