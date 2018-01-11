/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:36:01 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/11 14:36:04 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n << _bit);
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(n * (1 << _bit)));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return this->_raw;
}

void    Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_bit);
}

float	Fixed::toFloat(void) const
{
	float	n;

	n = getRawBits();
	return (n / (1 << this->_bit));
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_raw = rhs.getRawBits();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
