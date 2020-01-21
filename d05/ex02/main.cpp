/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:49:09 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 15:15:41 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	Bureaucrat a = Bureaucrat("Allan", 1);
	Bureaucrat b = Bureaucrat("Bill", 150);
	
	ShrubberyCreationForm sf = ShrubberyCreationForm("bush");
	RobotomyRequestForm rf = RobotomyRequestForm("robot");
	PresidentialPardonForm pf = PresidentialPardonForm("president");
	PRINT(sf);
	PRINT(rf);
	PRINT(pf);
	try { a.executeForm(sf); }
	CATCH;
	try { b.signForm(sf); }
	CATCH;
	try { a.signForm(sf); }
	CATCH;
	try { b.executeForm(sf); }
	CATCH;
	try { a.executeForm(sf); }
	CATCH;
	try
	{
		a.signForm(rf);
		a.signForm(pf);
	}
	CATCH;
	try { b.executeForm(rf); }
	CATCH;
	try { a.executeForm(rf); }
	CATCH;
	try { b.executeForm(pf); }
	CATCH;
	try { a.executeForm(pf); }
	CATCH;
	return (0);
}