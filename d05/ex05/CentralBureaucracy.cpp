/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:59:53 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/08/20 17:49:15 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy(void)
{
	for (int i = 0; i < 20; ++i)
		_blocks[i].setIntern(new Intern);
	_targets = new s_list;
	_targets->next = NULL;
	srand(time(NULL));
}

std::string CentralBureaucracy::_forms[3] =
{
	"presidential pardon",
	"robotomy request",
	"shrubbery creation"
};

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy &cpy)
{ *this = cpy; }

CentralBureaucracy::~CentralBureaucracy(void){ }

CentralBureaucracy&	CentralBureaucracy::operator = (const CentralBureaucracy &old)
{
	_targets = old.getTargets();
	return (*this);
}

s_list	*CentralBureaucracy::getTargets(void) const
{ return _targets; }

void	CentralBureaucracy::FeedBureaucrat(Bureaucrat *bcrat)
{
	for (int i = 0; i < 20; ++i)
	{
		if (!_blocks[i].getSigner())
		{
			_blocks[i].setSigner(bcrat);
			return;
		}
		if (!_blocks[i].getExecutor())
		{
			_blocks[i].setExecutor(bcrat);
			return;
		}
	}
	std::cout << "All blocks full! Bureaucrat rejected." << std::endl;
}

void	CentralBureaucracy::queueUp(std::string target)
{
	s_list *tmp = _targets;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->target = target;
	tmp->next = new s_list;
	_queueSize++;
}

void	CentralBureaucracy::doBureaucracy(void)
{
	int currentBlock = 0;
	s_list *tmp;
	while(_queueSize)
	{	
		if (currentBlock > 19)
			currentBlock = 0;
		_blocks[currentBlock].doBureaucracy(_forms[rand() % 3], _targets->target);
		tmp = _targets;
		_targets = _targets->next;
		tmp->next = NULL;
		delete tmp;
		_queueSize--;
		currentBlock++;
	}
	std::cout << "No more tasks!" << std::endl;
}