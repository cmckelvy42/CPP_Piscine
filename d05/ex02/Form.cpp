/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:38:53 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 14:42:40 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) { }

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &cpy) :
_name(cpy.getName()), _signed(cpy.getSigned()), _gradeToSign(cpy.getGradeToSign()), _gradeToExecute(getGradeToExecute())
{
	*this = cpy;
}

Form::~Form(void) { }

Form&	Form::operator = (const Form &) {return (*this);}

std::string	Form::getName(void)				const { return (_name); }
bool		Form::getSigned(void)			const { return (_signed); }
int			Form::getGradeToSign(void)		const { return (_gradeToSign); }
int			Form::getGradeToExecute(void)	const { return (_gradeToExecute); }

void	Form::beSigned(Bureaucrat& brc)
{
	if (_gradeToSign < brc.getGrade())
		throw	Form::GradeTooLowException();
	_signed = true;
}

std::ostream	&operator << (std::ostream &output, Form const &frm)
{
	output << "The " << frm.getName() << " form requires a grade of "
	<< frm.getGradeToSign() << " to sign, " << frm.getGradeToExecute()
	<< " to execute, and is currently" << (frm.getSigned() ? " " : " not ")
	<< "signed";
	return (output);
}

Form::GradeTooHighException::GradeTooHighException(void) { }
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &cpy) { *this = cpy; }
Form::GradeTooHighException::~GradeTooHighException(void) throw() { }
Form::GradeTooHighException& Form::GradeTooHighException::operator = (const GradeTooHighException&) { return (*this); }
const char* Form::GradeTooHighException::what() const throw() { return ("Error: Grade too high"); }

Form::GradeTooLowException::GradeTooLowException(void) { }
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &cpy) { *this = cpy; }
Form::GradeTooLowException::~GradeTooLowException(void) throw() { }
Form::GradeTooLowException& Form::GradeTooLowException::operator = (const GradeTooLowException&) { return (*this); }
const char* Form::GradeTooLowException::what() const throw() { return ("Error: Grade too low"); }

Form::UnsignedException::UnsignedException(void) { }
Form::UnsignedException::UnsignedException(const UnsignedException &cpy) { *this = cpy; }
Form::UnsignedException::~UnsignedException(void) throw() { }
Form::UnsignedException& Form::UnsignedException::operator = (const UnsignedException&) { return (*this); }
const char* Form::UnsignedException::what() const throw() { return ("Error: Form not signed"); }