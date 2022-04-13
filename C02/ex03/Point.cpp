/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:27:03 by gleal             #+#    #+#             */
/*   Updated: 2022/04/13 22:00:37by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(), y()
{
}

Point::Point(const float nx, const float ny): x(nx), y(ny)
{

}

Point::Point(const Point &point): x(point.x), y(point.y)
{
	std::cout << "calling constructor" << std::endl;
}

Point &Point::operator=(const Point &point)
{
	this->~Point();
    new(this) Point(point.get_x().toFloat(), point.get_y().toFloat());
	return *this;
}

Fixed Point::get_x( void ) const
{
	return (x);
}

Fixed Point::get_y( void ) const
{
	return (y);
}

Point::~Point()
{

}

// std::cerr << "x and y are constants, please create a new point" << std::endl;
// this->x.setRawBits(point.x.toFloat());