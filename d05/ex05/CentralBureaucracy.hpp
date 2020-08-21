/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 14:30:22 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/08/20 17:47:41 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP
#include "OfficeBlock.hpp"

struct	s_list //why can't I just use an actual STL queue, 42 rules suck
{
	std::string	target;
	s_list		*next;
};

class CentralBureaucracy
{
private:
	OfficeBlock	_blocks[20];
	s_list		*_targets;
	int			_queueSize = 0;
	static std::string _forms[3];
public:
	CentralBureaucracy(void);
	CentralBureaucracy(const CentralBureaucracy &cpy);
	~CentralBureaucracy(void);
	CentralBureaucracy&	operator = (const CentralBureaucracy &old);

	s_list	*getTargets(void) const;
	void	FeedBureaucrat(Bureaucrat *bcrat);
	void	queueUp(std::string target);
	void	doBureaucracy(void);
};
#endif