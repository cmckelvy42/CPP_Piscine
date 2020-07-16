/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:14:36 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/16 11:40:16 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137)
{
	_target = "default";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
{
	_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form("ShrubberyCreation", 145, 137)
{ *this = cpy; }
ShrubberyCreationForm::~ShrubberyCreationForm(void) { }
ShrubberyCreationForm&	ShrubberyCreationForm::operator = (const ShrubberyCreationForm &) { return (*this); }

std::string	ShrubberyCreationForm::getTarget(void)	const	{ return (_target); }

void		ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	if (this->getSigned())
	{
		if (b.getGrade() <= this->getGradeToExecute())
		{
			std::ofstream	os(_target + "_shrubbery");
			if (os)
			{
				os << "                     .o00o" << std::endl
				<< "                   o000000oo" << std::endl
				<< "                  00000000000o" << std::endl
				<< "                 00000000000000" << std::endl
				<< "              oooooo  00000000  o88o" << std::endl
				<< "           ooOOOOOOOoo  ```''  888888" << std::endl
				<< "         OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl
				<< "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'" << std::endl
				<< "        OOOOOOOOOO'.QQQQQQQQQQ/ /q" << std::endl
				<< "         OOOOOOOOO QQQQQQQQQQ/ /QQ" << std::endl
				<< "           OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl
				<< "             OO:F_P:O `QQQ/  /Q'" << std::endl
				<< "                \\\\. \\ |  // |" << std::endl
				<< "                d\\ \\\\\\|_////" << std::endl
				<< "                qP| \\\\ _' `|Ob" << std::endl
				<< "                   \\  / \\  \\Op" << std::endl
				<< "                   |  | O| |" << std::endl
				<< "           _       /\\. \\_/ /\\" << std::endl
				<< "            `---__/|_\\\\   //|  __" << std::endl
				<< "                  `-'  `-'`-'-'" << std::endl;
			}
			os.close();
			std::cout << "shrubbery created" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw UnsignedException();
}