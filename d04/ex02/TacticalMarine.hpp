/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:51:43 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/10 15:15:46 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &cpy);
	~TacticalMarine(void);
	TacticalMarine&	operator = (const TacticalMarine &old);

	ISpaceMarine*	clone(void)			const;
	void			battleCry(void)		const;
	void			rangedAttack(void)	const;
	void			meleeAttack(void)	const;
};

#endif