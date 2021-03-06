/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:48:41 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/18 17:12:36 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5)
{
	_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form("PresidentialPardon", 25, 5)
{ 
	*this = cpy; 
}

PresidentialPardonForm::~PresidentialPardonForm(void) { }
PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm &) { return (*this); }

std::string	PresidentialPardonForm::execute(Bureaucrat const &brc) const
{
	if (this->getSigned())
	{
		if (brc.getGrade() <= this->getGradeToExecute())
			return (brc.getName() + " has been pardoned by Zaphod Beeblebrox");

		else
			throw GradeTooLowException();
	}
	else
		throw UnsignedException();
}