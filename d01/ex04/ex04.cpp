/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 17:43:58 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 17:48:17 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *ptr = &brain;
	std::string &ref = brain;
	
	std::cout << "This is a pointer to " << *ptr << std::endl;
	std::cout << "This is a reference to " << ref << std::endl;
}