/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:38:53 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/16 11:30:57 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	_dispatch[0] = &Intern::_newPresidentialPardonForm;
    _dispatch[1] = &Intern::_newRobotomyRequestForm;
    _dispatch[2] = &Intern::_newShrubberyCreationForm;
}

std::string Intern::_names[3] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
};

Form	*Intern::_searchForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; ++i)
	{
		if (_names[i] == name)
			return (this->*_dispatch[i])(target);
	}
	return (0);
}

Intern::Intern(const Intern &cpy)
{ *this = cpy; }

Intern::~Intern(void) { }

Intern&	Intern::operator = (const Intern & rhs) 
{
	static_cast <void> (rhs);
	return (*this);}

Form	*Intern::_newPresidentialPardonForm(std::string target)
{ return (new PresidentialPardonForm(target)); }

Form	*Intern::_newRobotomyRequestForm(std::string target)
{ return (new RobotomyRequestForm(target)); }

Form	*Intern::_newShrubberyCreationForm(std::string target)
{ return (new ShrubberyCreationForm(target)); }

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form *ret = _searchForm(name, target);
	if (!ret)
	{
		throw Intern::InvalidFormException();
		return NULL;
	}
	return ret;
}

Intern::InvalidFormException::InvalidFormException(void) { }
Intern::InvalidFormException::InvalidFormException(const InvalidFormException &cpy) { *this = cpy; }
Intern::InvalidFormException::~InvalidFormException(void) throw() { }
Intern::InvalidFormException& Intern::InvalidFormException::operator = (const InvalidFormException&) { return (*this); }
const char* Intern::InvalidFormException::what() const throw() { return ("Error: Invalid Form."); }
