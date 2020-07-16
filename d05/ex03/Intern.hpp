/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 18:47:04 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/16 11:23:21 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
//create a dispatch table to quickly match the name to the appropriate function
	typedef				Form* (Intern::*FPointer)(std::string);
	FPointer			_dispatch[3];
	static std::string	_names[3];
	Form*				_searchForm(std::string name, std::string target);
    Form*				_newPresidentialPardonForm(std::string target);
    Form*				_newRobotomyRequestForm(std::string target);
    Form*				_newShrubberyCreationForm(std::string target);
	class	InvalidFormException : public std::exception
	{
	public:
		InvalidFormException(void);
		InvalidFormException(const InvalidFormException &cpy);
		~InvalidFormException(void) throw();
		InvalidFormException& operator = (const InvalidFormException &old);
		virtual const char* what() const throw();
	};
public:
	Intern(void);
	Intern(const Intern &cpy);
	~Intern(void);
	Intern&	operator = (const Intern &old);

	Form	*makeForm(std::string name, std::string target);
	
};
#endif