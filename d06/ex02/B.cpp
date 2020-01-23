/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:41:45 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/22 17:58:15 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void){return ;}

B::B(const B &src)
{
    *this = src;
    return ;
}

B::~B(void){return ;}

B&	B::operator= (const B &) {return (*this);}