/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:53:06 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/01 14:24:21 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

#define PRINT(x) std::cout << x << std::endl

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") 
{ PRINT("* click click click *"); }

RadScorpion::RadScorpion(const RadScorpion &cpy) : Enemy(cpy)
{ PRINT("* click click click *"); }
RadScorpion::~RadScorpion(void) 
{ PRINT( "* SPROTCH *"); }