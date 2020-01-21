/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:46:13 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/14 23:20:51 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int                 _fixedPointValue;
	static const int    _numBits;
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);
	Fixed(const Fixed &other);
	Fixed&  		operator = (const Fixed &other);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream&	operator<<(std::ostream &out, Fixed const &in);

#endif
