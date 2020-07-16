/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:51:14 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/16 11:41:13 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45)
{
	srand(time(NULL));
	_target = "default";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form("RobotomyRequest", 72, 45)
{ *this = cpy; }
RobotomyRequestForm::~RobotomyRequestForm(void) { }
RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm &) { return (*this); }

void	RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	if (this->getSigned())
	{
		if (b.getGrade() <= this->getGradeToExecute())
		{
			if (rand() % 2)
				std::cout << _target << " has been robotomized successfully" << std::endl;
			else
				std::cout << _target << " the robotomization has failed" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw UnsignedException();
}