/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:55:38 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 13:29:30 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) { }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy.getName()), _grade(cpy.getGrade())
{
	*this = cpy;
}

Bureaucrat::~Bureaucrat(void) { }

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat &old)
{
	_grade = old.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void)	const{return (_name);}

int	Bureaucrat::getGrade(void)	const{return (_grade);}

void		Bureaucrat::upGrade(void)
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void		Bureaucrat::downGrade(void)
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream	&operator << (std::ostream &output, Bureaucrat const &brc)
{
	output << brc.getName() << ", bureaucrat grade " << brc.getGrade();
	return (output);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) { }
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &cpy) { *this = cpy; }
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { }
Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator = (const GradeTooHighException&) { return (*this); }
const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Error: Grade too high"); }

Bureaucrat::GradeTooLowException::GradeTooLowException(void) { }
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &cpy) { *this = cpy; }
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { }
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator = (const GradeTooLowException&) { return (*this); }
const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Error: Grade too low"); }