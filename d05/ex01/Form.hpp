/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:33:17 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 15:03:34 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:42:10 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 13:28:09 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;
class	Form
{
private:
	std::string	const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExecute;
	
public:
	Form(void);
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &cpy);
	~Form(void);
	Form&	operator = (const Form &old);
	
	std::string	getName(void)			const;
	bool		getSigned(void)			const;
	int			getGradeToSign(void)	const;
	int			getGradeToExecute(void)	const;
	void		beSigned(Bureaucrat& brc);

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

std::ostream&	operator << (std::ostream &output, Form const &frm);

#endif