/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:22 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 14:59:10 by gleal            ###   ########.fr       */
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
	if (nbr > (INT_MAX >> this->fracbits) || nbr < (INT_MIN >> this->fracbits)) {
		std::cout << "Integer out of limits" << std::endl;
		this->fixedpoint = 0;
		return ;
	}
	setRawBits(nbr << fracbits);
}

Fixed::Fixed(const float nbr)
{
	if ((const int)nbr > (INT_MAX >> this->fracbits) || (const int)nbr < (INT_MIN >> this->fracbits)) {
		std::cout << "Float out of limits" << std::endl;
		this->fixedpoint = 0;
		return ;
	}
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
	if (fixedpoint + fixed.fixedpoint > (INT_MAX >> this->fracbits) || fixedpoint + fixed.fixedpoint < (INT_MIN >> this->fracbits)) {
		std::cout << "Sum value is out of limits" << std::endl;
		return ;
	}
	Fixed temp;
	temp.setRawBits(fixedpoint + fixed.fixedpoint);
	return temp;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	if (fixedpoint - fixed.fixedpoint > (INT_MAX >> this->fracbits) || fixedpoint - fixed.fixedpoint < (INT_MIN >> this->fracbits)) {
		std::cout << "Subtraction value is out of limits" << std::endl;
		return ;
	}
	Fixed temp;
	temp.setRawBits(fixedpoint - fixed.fixedpoint);
	return temp;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	if (fixedpoint - fixed.fixedpoint > (INT_MAX >> this->fracbits) || fixedpoint - fixed.fixedpoint < (INT_MIN >> this->fracbits)) {
		std::cout << "Subtraction value is out of limits" << std::endl;
		return ;
	}
	Fixed temp;
	temp.setRawBits(fixedpoint - fixed.fixedpoint);
	return temp;
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	if ((const int)(this->toFloat() * fixed.toFloat()) > (INT_MAX >> this->fracbits) || (const int)(this->toFloat() * fixed.toFloat()) < (INT_MIN >> this->fracbits)) {
		std::cout << "Multiplication value is out of limits" << std::endl;
		return ;
	}
	Fixed temp(this->toFloat() * fixed.toFloat());
	return temp;
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	if ((const int)(this->toFloat() / fixed.toFloat()) > (INT_MAX >> this->fracbits) || (const int)(this->toFloat() / fixed.toFloat()) < (INT_MIN >> this->fracbits)) {
		std::cout << "Division value is out of limits" << std::endl;
		return ;
	}
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
