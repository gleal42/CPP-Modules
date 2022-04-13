/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:18:55 by gleal             #+#    #+#             */
/*   Updated: 2022/04/13 01:32:24 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

/* ---------------------- Ex00 Orthodox Canonical form ---------------------- */

class Fixed
{
	private:
		int fixedpoint;
		static const int fracbits;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );

/* ------------------ Ex01 Fixed-Point for floats and ints ------------------ */

		Fixed(const int nbr);
		Fixed(const float nbr);
		float toFloat( void ) const;
		int toInt( void ) const;

/* -------------------- Ex02 operators overload functions ------------------- */

		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);
		Fixed operator+(const Fixed &fixed);
		Fixed operator-(const Fixed &fixed);
		Fixed operator*(const Fixed &fixed);
		Fixed operator/(const Fixed &fixed);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed& a, Fixed&b);
		static const Fixed& min(const Fixed& a, const Fixed&b);
		static Fixed& max(Fixed& a, Fixed&b);
		static const Fixed& max(const Fixed& a, const Fixed&b);
};

//Ex01 - continuation
std::ostream& operator<<(std::ostream &stream, const Fixed& fp);

#endif