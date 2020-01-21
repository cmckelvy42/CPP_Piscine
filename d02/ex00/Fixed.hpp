/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:46:13 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/14 22:12:21 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int                 _fixedPointValue;
	static const int    _numBits;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &other);
	Fixed&  operator = (const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
