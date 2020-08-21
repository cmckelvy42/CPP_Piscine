/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:55:38 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/16 11:16:42 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _intern(NULL), _bcrat1(NULL), _bcrat2(NULL) { }

OfficeBlock::OfficeBlock(Intern *i, Bureaucrat *s, Bureaucrat *e) : _intern(i), _bcrat1(s), _bcrat2(e) { }

OfficeBlock::OfficeBlock(const OfficeBlock &cpy)
{ *this = cpy; }

OfficeBlock::~OfficeBlock(void) { }

OfficeBlock&	OfficeBlock::operator = (const OfficeBlock &old)
{
	_intern = old.getIntern();
	_bcrat1 = old.getSigner();
	_bcrat2 = old.getExecutor();
	return (*this);
}

Intern		*OfficeBlock::getIntern(void) const
{ return (_intern); }

Bureaucrat		*OfficeBlock::getSigner(void) const
{ return (_bcrat1); }

Bureaucrat		*OfficeBlock::getExecutor(void) const
{ return (_bcrat2); }

void		OfficeBlock::setIntern(Intern *intern)
{ _intern = intern; }

void		OfficeBlock::setSigner(Bureaucrat *bcrat)
{ _bcrat1 = bcrat; }

void		OfficeBlock::setExecutor(Bureaucrat *bcrat)
{ _bcrat2 = bcrat; }

void	OfficeBlock::doBureaucracy(std::string title, std::string target)
{
	if (!_intern || !_bcrat1 || !_bcrat2)
		throw IncompleteBlockException();
	try
	{
		Form *tmp = _intern->makeForm(title, target);
		_bcrat1->signForm(*tmp);
		_bcrat2->executeForm(*tmp);
		delete tmp;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::string er)
	{
		std::cout << er << std::endl; 
	}
	catch (...)
	{
		std::cout << "Unexpected error!" << std::endl;
	}
}


OfficeBlock::IncompleteBlockException::IncompleteBlockException(void) { }
OfficeBlock::IncompleteBlockException::IncompleteBlockException(const IncompleteBlockException &cpy) { *this = cpy; }
OfficeBlock::IncompleteBlockException::~IncompleteBlockException(void) throw() { }
OfficeBlock::IncompleteBlockException& OfficeBlock::IncompleteBlockException::operator = (const IncompleteBlockException&) { return (*this); }
const char* OfficeBlock::IncompleteBlockException::what() const throw() { return ("Error: Incomplete block"); }
