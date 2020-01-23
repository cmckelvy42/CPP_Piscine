/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:41:45 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/22 17:58:20 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void){return ;}

A::A(const A &src)
{
    *this = src;
    return ;
}

A::~A(void){return ;}

A&	A::operator= (const A &) {return (*this);}