/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:42:10 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 14:40:24 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
private:
	std::string	const	_name;
	int 				_grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade = 150);
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat(void);
	Bureaucrat&	operator = (const Bureaucrat &old);

	std::string	getName(void)	const;
	int			getGrade(void)	const;

	void		upGrade(void);
	void		downGrade(void);
	void		signForm(Form &frm);
	void		executeForm(Form const &frm);

	class	GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(const GradeTooHighException &cpy);
		~GradeTooHighException(void) throw();
		GradeTooHighException& operator = (const GradeTooHighException &old);
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(const GradeTooLowException &cpy);
		~GradeTooLowException(void) throw();
		GradeTooLowException& operator = (const GradeTooLowException &old);
		virtual const char* what() const throw();
	};

};

std::ostream&	operator << (std::ostream &output, Bureaucrat const &brc);

#endif