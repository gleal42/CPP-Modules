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
}

Point &Point::operator=(const Point &point)
{
	if (this != &point){
		this->~Point();
		new(this) Point(point);
	}
	return *this;
}

Fixed Point::det_t(Point const &a, Point const &b, Point const &c) const
{
	Fixed det(((b.y - c.y) * (a.x - c.x)) + ( (c.x - b.x) * (a.y - c.y)));
	return (det);
}

Fixed Point::bc1(Point const &b, Point const &c, Fixed &det) const
{
	Fixed baycent1((((b.y-c.y)*(this->x-c.x)) + ((c.x-b.x)*(this->y-c.y)))/ det);
	return (baycent1);
}

Fixed Point::bc2(Point const &a, Point const &c, Fixed &det) const
{
	Fixed baycent2((((c.y-a.y)*(this->x-c.x)) + ((a.x-c.x)*(this->y-c.y))) / det); 
	return (baycent2);
}

Point::~Point()
{
}
