/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 21:22:36 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fracbits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(fixed.getRawBits());
	return *this;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int Fixed::getRawBits( void ) const
{
	return (fixedpoint);
}
void Fixed::setRawBits( int const raw )
{
	this->fixedpoint = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	if (nbr > (INT_MAX >> fracbits) || nbr < (INT_MIN >> fracbits)) {
		std::cout << "Integer out of limits" << std::endl;
		setRawBits(0);
		return ;
	}
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nbr << fracbits);
}

Fixed::Fixed(const float nbr)
{
	if ((const int)nbr > (INT_MAX >> fracbits) || (const int)nbr < (INT_MIN >> fracbits)) {
		std::cout << "Float out of limits" << std::endl;
		setRawBits(0);
		return ;
	}
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(nbr * (1 << fracbits)));
}

float Fixed::toFloat( void ) const
{
	return ((float)getRawBits()/(float)(1 << fracbits));
}

int Fixed::toInt( void ) const
{
	return (getRawBits() >> fracbits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed& fp)
{
	stream << fp.toFloat();
	return stream;
}
