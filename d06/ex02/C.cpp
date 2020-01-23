/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:41:45 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/22 17:58:07 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void){return ;}

C::C(const C &src)
{
    *this = src;
    return ;
}

C::~C(void){return ;}

C&	C::operator= (const C &) {return (*this);}