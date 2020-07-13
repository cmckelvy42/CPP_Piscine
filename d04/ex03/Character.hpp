/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:36:31 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/10 15:11:29 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

#define INV_CAPACITY 4

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[INV_CAPACITY];

public:
	Character(void);
	Character(std::string const name);
	Character(const Character &cpy);
	~Character(void);

	Character&	operator = (const Character &old);

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria* getInventory(int idx) const;
	std::string const & getName(void) const;
};

#endif