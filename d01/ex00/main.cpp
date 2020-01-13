/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:09:36 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 14:18:00 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap(void)
{
    Pony *pony = new Pony("Heap", "tramp", "earth");
    pony->some();
    delete pony;
    return;
}

void    ponyOnTheStack(void)
{
    Pony pony = Pony("Spilight Twarkle", "stamp", "unicorn");
    pony.stuff();
    return;
}

int     main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}