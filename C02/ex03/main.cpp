/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/15 00:57:20 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(200.0f, 400.0f);
	Point b(200.0f, 300.0f);
	Point c(300.0f, 400.0f);
	Point point1(200.1f, 399.9f);
	std::cout << (bsp(a, b, c, point1) ? "inside triangle" : "outside triangle") << std::endl;
	Point point2(199.99f, 399.0f);
	std::cout << (bsp(a, b, c, point2) ? "inside triangle" : "outside triangle") << std::endl;
	Point point3(233.00f, 370.0f);
	std::cout << (bsp(a, b, c, point3) ? "inside triangle" : "outside triangle") << std::endl;
	Point point4(273.00f, 303.0f);
	std::cout << (bsp(a, b, c, point4) ? "inside triangle" : "outside triangle") << std::endl;
	Point d(-200.0f, 400.0f);
	std::cout << (bsp(d, b, c, point3) ? "inside triangle" : "outside triangle") << std::endl;
	std::cout << (bsp(d, b, c, point4) ? "inside triangle" : "outside triangle") << std::endl;
	return 0;
}


























// Point b(2.3, 3.5);
// std::cout << "b x value: " << b.get_x() << std::endl;
// std::cout << "b y value: " << b.get_y() << std::endl;
// Point c(b);
// std::cout << "c construct b x value: " << c.get_x() << std::endl;
// std::cout << "c construct b y value: " << c.get_y() << std::endl;
// Point d(4.0, 2.5);
// std::cout << "d value : " << d.get_x() << std::endl;
// std::cout << "d value : " << d.get_y() << std::endl;
// b = d;
// std::cout << "b value after assign d: " << b.get_x() << std::endl;
// std::cout << "b value after assign d: " << b.get_y() << std::endl;