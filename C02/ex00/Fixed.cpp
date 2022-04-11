/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/12 00:22:21 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::nbits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedpoint = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedpoint = fixed.getRawBits();
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixedpoint = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
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