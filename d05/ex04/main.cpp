/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:49:09 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/18 16:54:41 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 46);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 73);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("robotomy request", "Bender");
		bob.upGrade();
		ob.doBureaucracy("robotomy request", "Bender");
		hermes.upGrade();
		ob.doBureaucracy("robotomy request", "Bender");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::string ex)
	{
		std::cout << ex << std::endl;
	}
	catch (...)
	{
		std::cout << "unkown error" << std::endl;
	}
}