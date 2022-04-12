#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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
	Fixed(const int nbr);
	Fixed(const float nbr);
	float toFloat( void ) const;
	int toInt( void ) const;


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
std::ostream& operator<<(std::ostream &stream, const Fixed& fp);

#endif