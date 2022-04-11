#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int fixedpoint;
	static const int nbits;
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
	Fixed &operator<<(std::ostream stream);
};



#endif