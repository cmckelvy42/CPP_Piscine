/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:36:31 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/10 15:11:29 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

//no STL allowed yet so we have to make a simple linked list of units
typedef struct	s_unit
{
	ISpaceMarine	*unit;
	s_unit			*next;
}				t_unit;

class Squad : public ISquad
{
private:
	int		_count;
	t_unit	*_unit;

public:
	Squad(void);
	Squad(const Squad &cpy);
	~Squad(void);

	Squad&	operator = (const Squad &old);

	int				getCount(void)	const;
	ISpaceMarine*	getUnit(int n)	const;
	int				push(ISpaceMarine* dude);
};

#endif