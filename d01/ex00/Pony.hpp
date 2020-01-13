/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 22:00:37 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/12 15:00:25 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
	private:
		std::string _name;
		std::string _cmark;
		std::string _type;
		
	public:
		Pony(std::string name, std::string cmark, std::string type);
		~Pony(void);

		void	some(void);
		void	stuff(void);
};
#endif
