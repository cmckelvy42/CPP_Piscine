/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:56:42 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/14 23:38:57 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_numBits = 8;

Fixed::Fixed(void)
{
	_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = value << _numBits;
    return ;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(value * (1 << _numBits));
    return ;
}

Fixed::~Fixed()
{
	std::cout << "Default deconstructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

Fixed&	Fixed::operator = (const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (1 << _numBits));
}

int		Fixed::toInt(void) const
{
	return ((int)_fixedPointValue >> _numBits);
}

std::ostream&	operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}