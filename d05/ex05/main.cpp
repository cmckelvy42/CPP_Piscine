/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:49:09 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/08/20 18:05:20 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <sstream>

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int main()
{
	CentralBureaucracy CB;
	
	for (int i = 0; i < 20; i++)
	{
		std::ostringstream oss;
		oss << i;
		CB.FeedBureaucrat(new Bureaucrat("Bobby Bobson" + oss.str(), 2));
		CB.FeedBureaucrat(new Bureaucrat("Hermes Conrad" + oss.str(), 1));
		CB.queueUp("test" + oss.str());
	}
	try
	{
		CB.doBureaucracy();
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
		std::cout << "unknown error" << std::endl;
	}
}