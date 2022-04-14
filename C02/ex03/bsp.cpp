/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:26:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/15 00:29:00 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* -------------------------------------------------------------------------- */
/*          We shall use the baricentric coordinates of the triangle:         */
/* -------------------------------------------------------------------------- */
/*
*  Baricentric coordinate system is used to describe the position of a point
*  in reference to a simplex (e.g. triangle),
*  which is exactly what we are looking for. If the point is inside the triangle,
*  then these coordinates will all be:
*  
*  0 <= bc1 <= 1
*  0 <= bc2 <= 1
*  0 <= bc3 <= 1
*  
*  If we follow the barycentric and Cartesian coordinates - Edge approach
*  https://en.wikipedia.org/wiki/Barycentric_coordinate_system#Barycentric_coordinates_on_triangles
*  point = bc1 * a + bc2 * b + bc3 * c
*  bc3 = 1 - bc2 - bc3;
*  After solving equation:
*  det(T) = (y_b - y_c) * (x_a - x_c) + (x_c - x_b) * (y_a - y_c)
*  bc1 = ((y_b - y_c) * (x_p - x_c) + (x_c - x_b) * (y_p - y_c)) / det(T)
*  bc2 = ((y_c - y_a) * (x_p - x_c) + (x_a - x_c) * (y_p - y_c)) / det(T)
*  bc3 = 1 - bc1 - bc2
*/

Fixed Point::bc2(Point const &a, Point const &c, Fixed &det) const
{
	Fixed baycent2((((c.y-a.y)*(this->x-c.x)) + ((a.x-c.x)*(this->y-c.y))) / det); 
	return (baycent2);
}

Fixed Point::bc1(Point const &b, Point const &c, Fixed &det) const
{
	Fixed baycent1((((b.y-c.y)*(this->x-c.x)) + ((c.x-b.x)*(this->y-c.y)))/ det);
	return (baycent1);
}

Fixed Point::det_t(Point const &a, Point const &b, Point const &c) const
{
	Fixed det(((b.y - c.y) * (a.x - c.x)) + ( (c.x - b.x) * (a.y - c.y)));
	return (det);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed det = point.det_t(a, b, c);
	std::cout << "Determinant " << det << std::endl;
	Fixed bc1 = point.bc1(b, c, det);
	std::cout << "fst baricenter coord " << bc1 << std::endl;
	Fixed bc2 = point.bc2(a, c, det);
	std::cout << "2nd baricenter coord " << bc2 << std::endl;
	Fixed bc3 = 1 - bc1.toFloat() - bc2.toFloat();
	std::cout << "3rd baricenter coord " << bc3 << std::endl;
	return (bc1.is_zero_to_one() && bc2.is_zero_to_one() && bc3.is_zero_to_one());
}
