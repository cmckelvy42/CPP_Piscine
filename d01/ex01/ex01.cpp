/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:22:30 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 15:29:25 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string	*panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	
	delete panthere;
	return;
}