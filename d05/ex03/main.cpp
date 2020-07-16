/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:49:09 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/16 11:36:22 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	Intern intern;
	Bureaucrat bcrat = Bureaucrat("test", 1);

	Form* sf;
	Form* rf;
	Form* pf;
	Form* nf;
	try
	{
		sf = intern.makeForm("shrubbery creation", "shrubs");
		rf = intern.makeForm("robotomy request", "robots");
		pf = intern.makeForm("presidential pardon", "everyone");
		nf = intern.makeForm("invalid", "form");
	}
	CATCH;
	bcrat.signForm(*sf);
	bcrat.executeForm(*sf);
	bcrat.signForm(*pf);
	bcrat.executeForm(*pf);
	bcrat.signForm(*rf);
	bcrat.executeForm(*rf);
	static_cast <void> (nf);
	return (0);
}