/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:26:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/15 01:27:09 by gleal            ###   ########.fr       */
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
