/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 14:43:13 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;


	// Extra tests

	std::cout << std::endl;
	std::cout << "Extra tests regarding limits" << std::endl;
	Fixed e(8388608);
	std::cout << "e is " << e << std::endl;
	Fixed f(8388607);
	std::cout << "f is " << f << std::endl;
	std::cout << std::endl;
	Fixed g(-8388607);
	std::cout << "g is " << g << std::endl;
	Fixed h(-8388608);
	std::cout << "h is " << h << std::endl;
	Fixed i(-8388609);
	std::cout << "i is " << i << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Fixed j(8388608.0f);
	std::cout << "j is " << j << std::endl;
	Fixed k(8388607.0f);
	std::cout << "k is " << k << std::endl;
	Fixed l(-8388607.0f);
	std::cout << "l is " << l << std::endl;
	Fixed m(-8388608.0f);
	std::cout << "m is " << m << std::endl;
	Fixed n(-8388609.0f);
	std::cout << "n is " << n << std::endl;
	std::cout << std::endl;
	return 0;
}