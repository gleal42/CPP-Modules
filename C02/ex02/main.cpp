/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/13 00:52:20 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// example from subject
	Fixed a;
	Fixed const b (Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	// extra tests
	std::cout << std::endl;
	std::cout << "Extra tests" << std::endl;
	Fixed c(4);
	std::cout << "c value: " << c << std::endl;
	std::cout << "c prefix decrement: "<< --c << std::endl;
	std::cout << "c value after: "<< c << std::endl;
	std::cout << "c postfix decrement: "<< c-- << std::endl;
	std::cout << "c value after: "<< c << std::endl;
	Fixed d (Fixed(2.0f) * Fixed(1.0f));
	std::cout << "d value: "<< d << std::endl;
	std::cout << "c = 4 and d = 2 for easier comparison" << std::endl;
	c = Fixed(4);
	std::cout << "min c and d: "<< Fixed::min( c, d ) << std::endl;
	std::cout << "d / c: " << d / c << std::endl;
	std::cout << "c < d: " << (c < d) << std::endl;
	std::cout << "c <= d: " << (c <= d) << std::endl;
	std::cout << "c > d: " << (c > d) << std::endl;
	std::cout << "c >= d: " << (c >= d) << std::endl;
	std::cout << "c == d: " << (c == d) << std::endl;
	std::cout << "c != d: " << (c != d) << std::endl;

	return 0;
}