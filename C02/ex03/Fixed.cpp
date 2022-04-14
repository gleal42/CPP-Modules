/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/14 23:39:47 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fracbits = 8;

Fixed::Fixed()
{
	this->fixedpoint = 0;
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
	fixedpoint = fixed.getRawBits();
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
	setRawBits(nbr << fracbits);
}

Fixed::Fixed(const float nbr)
{
	// std::cout << "default Const w args Fixed " << nbr << std::endl;
	setRawBits(roundf(nbr * (1 << fracbits)));
}

float Fixed::toFloat( void ) const
{
	return ((float)fixedpoint/(float)(1 << fracbits));
}

int Fixed::toInt( void ) const
{
	return (fixedpoint >> fracbits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed& fp)
{
	stream << fp.toFloat();
	return stream;
}

bool Fixed::operator>(const Fixed &fixed)
{
	return (fixedpoint > fixed.fixedpoint);
}

bool Fixed::operator<(const Fixed &fixed)
{
	return (fixedpoint < fixed.fixedpoint);
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (fixedpoint >= fixed.fixedpoint);
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (fixedpoint <= fixed.fixedpoint);
}

bool Fixed::operator==(const Fixed &fixed)
{
	return (fixedpoint == fixed.fixedpoint);
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return (fixedpoint != fixed.fixedpoint);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	Fixed temp;
	temp.setRawBits(fixedpoint + fixed.fixedpoint);
	return temp;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed temp;
	temp.setRawBits(fixedpoint - fixed.fixedpoint);
	return temp;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	Fixed temp;
	temp.setRawBits(fixedpoint - fixed.fixedpoint);
	return temp;
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed temp(this->toFloat() * fixed.toFloat());
	return temp;
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed temp(this->toFloat() / fixed.toFloat());
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

bool Fixed::is_zero_to_one(void)
{
	return (0.0f <= this->toFloat() && this->toFloat() <= 1.0f);
}