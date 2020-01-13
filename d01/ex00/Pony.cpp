/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:51:52 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 15:01:09 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string cmark, std::string type) :
    _name(name), _cmark(cmark), _type(type)
{
    std::cout << _name << " exists" << std::endl;
    return ;
}

Pony::~Pony(void)
{
    std::cout << _name << " no longer exists" << std::endl;
    return ;
}

void    Pony::some(void) { std::cout << _name << " says hello" << std::endl; }
void    Pony::stuff(void) { std::cout << _name << " says goodbye" << std::endl; }