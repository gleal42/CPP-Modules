/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 21:34:54 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fracbits = 8;

Fixed::Fixed()
{
	setRawBits(0);
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
	setRawBits(fixed.getRawBits());
	return *this;
}

Fixed::Fixed(const Fixed &fixed)
{
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
	
}

Fixed::Fixed(const int nbr)
{
	if (nbr > (INT_MAX >> fracbits) || nbr < (INT_MIN >> fracbits)) {
		std::cout << "Integer out of limits" << std::endl;
		setRawBits(0);
		return ;
	}
	setRawBits(nbr << fracbits);
}

Fixed::Fixed(const float nbr)
{
	if ((const int)nbr > (INT_MAX >> fracbits) || (const int)nbr < (INT_MIN >> fracbits)) {
		std::cout << "Float out of limits" << std::endl;
		setRawBits(0);
		return ;
	}
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

bool Fixed::operator>(const Fixed &fixed)
{
	return (getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed)
{
	return (getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed)
{
	return (getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return (getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	if (((getRawBits() + fixed.getRawBits()) > (INT_MAX >> fracbits)) || ((getRawBits() + fixed.getRawBits()) < (INT_MIN >> fracbits))) {
		std::cout << "Sum value is out of limits" << std::endl;
		return *this;
	}
	Fixed temp;
	temp.setRawBits(getRawBits() + fixed.getRawBits());
	return temp;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	if ((getRawBits() - fixed.getRawBits() > (INT_MAX >> fracbits)) || ((getRawBits() - fixed.getRawBits()) < (INT_MIN >> fracbits))) {
		std::cout << "Subtraction value is out of limits" << std::endl;
		return *this;
	}
	Fixed temp;
	temp.setRawBits(getRawBits() - fixed.getRawBits());
	return temp;
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	if (((const int)(toFloat() * fixed.toFloat()) > (INT_MAX >> fracbits)) || ((const int)(toFloat() * fixed.toFloat()) < (INT_MIN >> fracbits))) {
		std::cout << "Multiplication value is out of limits" << std::endl;
		return *this;
	}
	Fixed temp(toFloat() * fixed.toFloat());
	return temp;
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	if (((const int)(toFloat() / fixed.toFloat()) > (INT_MAX >> fracbits)) || ((const int)(toFloat() / fixed.toFloat()) < (INT_MIN >> fracbits))) {
		std::cout << "Division value is out of limits" << std::endl;
		return *this;
	}
	Fixed temp(toFloat() / fixed.toFloat());
	return temp;
}

Fixed Fixed::operator++()
{
	Fixed temp;
	temp.setRawBits(++fixedpoint);
	return temp;
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(fixedpoint++);
	return temp;
}

Fixed Fixed::operator--()
{
	Fixed temp;
	temp.setRawBits(--fixedpoint);
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(fixedpoint--);
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed&b)
{
	if (a < b){
		return a;
	}
	else{
		return b;
	}
}

const Fixed& Fixed::min(const Fixed& a, const Fixed&b)
{
	if ((Fixed &)a < (Fixed &)b){
		return a;
	}
	else{
		return b;
	}	
}

Fixed& Fixed::max(Fixed& a, Fixed&b)
{
	if (a > b){
		return a;
	}
	else{
		return b;
	}	
}

const Fixed& Fixed::max(const Fixed& a, const Fixed&b)
{
	if ((Fixed &)a > (Fixed &)b){
		return a;
	}
	else{
		return b;
	}	
}
