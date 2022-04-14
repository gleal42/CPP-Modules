/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:21:24 by gleal             #+#    #+#             */
/*   Updated: 2022/04/14 22:09:42 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(223.0f, 309.0f);
	Point b(294.0f, 208.0f);
	Point c(12.0f, 252.0f);
	Point point(324.0f, 247.0f);
	std::cout << bsp(a, b, c, point) << std::endl; 
	
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