/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:26:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/14 22:11:35 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* -------------------------------------------------------------------------- */
/*          We shall use the baricentric coordinates of the triangle:         */
/* -------------------------------------------------------------------------- */

/*
Baricentric coordinate system is used to describe the position of a point
in reference to a simplex (e.g. triangle),
which is exactly what we are looking for. If the point is inside the triangle,
then these coordinates will all be:

0 <= bc_a <= 1
0 <= bc_b <= 1
0 <= bc_c <= 1

If we follow the barycentric and Cartesian coordinates - Edge approach
https://en.wikipedia.org/wiki/Barycentric_coordinate_system#Barycentric_coordinates_on_triangles

point = bc_a * a + bc_b * b + bc_c * c
bc_c = 1 - bc_b - bc_c;
After solving equation:
det(T) = (y_b - y_c) * (x_a - x_c) + (x_c - x_b) * (y_a - y_c)

bc_a = ((y_b - y_c) * (x_p - x_c) + (x_c - x_b) * (y_p - y_c)) / det(T)
bc_b = ((y_c - y_a) * (x_p - x_c) + (x_a - x_c) * (y_p - y_c)) / det(T)
bc_c = 1 - bc_a - bc_b
*/

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed det, bc_a, bc_b, bc_c;

	det = ( (b.get_y().toFloat() - c.get_y().toFloat()) * (a.get_x().toFloat() - c.get_x().toFloat()) ) 
		+ ( (c.get_x().toFloat() - b.get_x().toFloat()) * (a.get_y().toFloat() - c.get_y().toFloat()) );
	std::cout << det << std::endl;
	bc_a = (( (b.get_y().toFloat() - c.get_y().toFloat()) * (point.get_x().toFloat() - c.get_x().toFloat()) )
		+  	( (c.get_x().toFloat() - b.get_x().toFloat()) * (point.get_y().toFloat() - c.get_y().toFloat()) ))
		/ det.toFloat();
	std::cout << bc_a << std::endl;
	bc_b = (( (c.get_y().toFloat() - a.get_y().toFloat()) * (point.get_x().toFloat() - c.get_x().toFloat()) )
		+ 	( (a.get_x().toFloat() - c.get_x().toFloat()) * (point.get_y().toFloat() - c.get_y().toFloat()) ))
		/ det.toFloat(); 
	std::cout << bc_b << std::endl;
	bc_c = 1 - bc_a.toFloat() - bc_b.toFloat();
	std::cout << bc_c << std::endl;
	return (0.0f <= bc_a.toFloat() && bc_a.toFloat() <= 1.0f && 0.0f <= bc_b.toFloat() && bc_b.toFloat() <= 1.0f && 0.0f <= bc_c.toFloat() && bc_c.toFloat() <= 1.0f);
}
	// Fixed bc_a;
	// Fixed bc_b;
	// Fixed bc_c;