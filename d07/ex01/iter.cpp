/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 18:43:48 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/23 19:33:03 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *ptr, int len, void (*f)(T const &))
{
	for (int i = 0;i < len;i++)
		f(ptr[i]);
}

template<typename T>
void	print(T const & x)
{
	std::cout << x << std::endl;
}

int		main(void)
{
	int         numbers[] = {4, 16, 6, 8, 42};
    std::string names[] = {"Steve", "Jonathon", "Aaron", "Charlotte", "Sara"};
	
	std::cout << "Names   : ";
    iter<std::string>(names, 5, print);

    std::cout << "Numbers : ";
    iter <int>(numbers, 5, print);

    return (0);
}