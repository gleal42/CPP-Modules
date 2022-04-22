/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/22 19:23:26 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(20.0f, 40.0f);
	Point b(20.0f, 30.0f);
	Point c(30.0f, 40.0f);

	Point point1(24.50f, 40.00f);
	std::cout << "Point 1 ";
	std::cout << (bsp(a, b, c, point1) ? "inside triangle" : "outside triangle") << std::endl;
	std::cout << std::endl;

	Point point2(30.0f, 40.0f);
	std::cout << "Point 2 ";
	std::cout << (bsp(a, b, c, point2) ? "inside triangle" : "outside triangle") << std::endl;

	std::cout << std::endl;
	std::cout << "Point 3 ";
	Point point3(23.30f, 37.0f);
	std::cout << (bsp(a, b, c, point3) ? "inside triangle" : "outside triangle") << std::endl;

	std::cout << std::endl;
	std::cout << "Point 4 ";
	Point point4(25.00f, 34.0f);
	std::cout << (bsp(a, b, c, point4) ? "inside triangle" : "outside triangle") << std::endl;

	std::cout << std::endl;
	std::cout << "Point d is now new vertex with a negative coordinate which will replace a" << std::endl;
	Point d(-20.0f, 40.0f);
	std::cout << "Point 3 ";
	std::cout << (bsp(d, b, c, point3) ? "inside triangle" : "outside triangle") << std::endl;
	std::cout << std::endl;
	std::cout << "Point 4 ";
	std::cout << (bsp(d, b, c, point4) ? "inside triangle" : "outside triangle") << std::endl;
	return 0;
}
