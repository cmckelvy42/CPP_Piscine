/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:46:28 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/10 15:30:58 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _count(0), _unit(NULL) { }
Squad::Squad(const Squad &cpy)
{ 
	for (int i = 0; i < cpy.getCount(); i++)
		this->push(cpy.getUnit(i));
}
Squad::~Squad(void)
{
	t_unit	*tmp;
	while (_unit)
	{
		tmp = _unit;
		_unit = _unit->next;
		delete tmp->unit;
		tmp->next = NULL;
		delete tmp;
	}
}

Squad&	Squad::operator = (const Squad &old)
{
	t_unit	*tmp;
	while (_unit)
	{
		tmp = _unit;
		_unit = _unit->next;
		delete tmp->unit;
		tmp->next = NULL;
		delete tmp;
	}
	for (int i = 0;i < old.getCount(); i++)
		this->push(old.getUnit(i));
	return (*this);
}

int				Squad::getCount(void) const
{ return (_count); }

ISpaceMarine*	Squad::getUnit(int n) const
{
	t_unit *tmp = _unit;
	
	if (n < 0)
		return (NULL);
	for (int i = 0; i < n; i++)
	{
		if (tmp && tmp->next)
			tmp = tmp->next;
		else
			return (NULL);
	}
	return (tmp->unit);
}

int				Squad::push(ISpaceMarine* dude)
{
	t_unit *tmp = _unit;

	if (!dude)
		return (_count);
	if (!_unit)
	{
		_unit = new t_unit;
		_unit->unit = dude;
		_unit->next = NULL;
		_count++;
		return (_count);
	}
	while (tmp->next)
	{
		if (tmp->unit == dude)
			return (_count);
		tmp = tmp->next;
	}

	tmp->next = new t_unit;
	tmp->next->unit = dude;
	tmp->next->next = NULL;
	_count++;
	return (_count);
}