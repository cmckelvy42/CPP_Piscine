/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:51:43 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/10 14:55:48 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator &cpy);
	~AssaultTerminator(void);
	AssaultTerminator&	operator = (const AssaultTerminator &old);

	ISpaceMarine*	clone(void)			const;
	void			battleCry(void)		const;
	void			rangedAttack(void)	const;
	void			meleeAttack(void)	const;
};

#endif