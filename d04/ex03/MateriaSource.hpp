/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 17:17:18 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/12 17:27:42 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

#define INV_CAPACITY 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_inventory[INV_CAPACITY];
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &cpy);
	~MateriaSource(void);
	MateriaSource&	operator = (const MateriaSource &old);

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
	AMateria* getInventory(int idx) const;
};
#endif