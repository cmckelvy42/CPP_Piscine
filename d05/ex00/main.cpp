/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:16:51 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 13:31:32 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	Bureaucrat a = Bureaucrat("Cam", 1);
	Bureaucrat b = Bureaucrat("Keet", 149);
	Bureaucrat d("Omari");
	d = b;
	PRINT(a);
	PRINT(b);
	PRINT(d);
	try { b.downGrade(); }
	CATCH;
	try
	{
		Bureaucrat c = Bureaucrat("Oreo", 151);
		PRINT("That's not supposed to happen");
	}
	CATCH;
	try { a.upGrade(); }
	CATCH;
	try { b.downGrade(); }
	CATCH;
	try
	{
		a.downGrade();
		PRINT(a.getGrade());
	}
	CATCH;
	return (0);
}