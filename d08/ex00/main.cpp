/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:50:37 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/08/24 17:15:15 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int> yeah;
	for (int i = 0; i < 10; i++)
		yeah.push_back(10 - i);
	std::cout << easyfind(yeah, 3) << std::endl;
	std::cout << easyfind(yeah, 0) << std::endl;
}
