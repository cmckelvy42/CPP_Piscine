/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:52:00 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/08/24 17:15:54 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>

//not clear what we're supposed to return so I'll return the index as an int I guess?
int	easyfind(T &container, int n)
{
	typename T::iterator iterator;
	iterator = std::find(container.begin(), container.end(), n);
	if (iterator == container.end())
		return -1;
	return (iterator - container.begin());
}
#endif