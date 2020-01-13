/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 20:12:23 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 20:12:31 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int
main(void)
{
    Human bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
    return (0);
}