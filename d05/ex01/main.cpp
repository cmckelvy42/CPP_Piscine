/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:49:09 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 15:11:01 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	try { Bureaucrat d = Bureaucrat("Jonathon", 200); }
	CATCH;
	Bureaucrat a = Bureaucrat("Aaron", 1);
	Bureaucrat b = Bureaucrat("Steve", 150);
	Bureaucrat c = Bureaucrat("Kelly", 50);
	
	Form form = Form("contract", 50, 20);
	PRINT(a);
	PRINT(b);
	PRINT(c);
	PRINT(form);
	b.signForm(form);
	PRINT(form);
	a.signForm(form);
	PRINT(form);
	return (0);
}