/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 19:23:20 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 19:28:25 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string	_thoughts;
public:
	Brain(void);
	~Brain(void);

	std::string	identify(void);
	void		setThoughts(std::string thoughts);
};
#endif