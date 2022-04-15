/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:27:52 by gleal             #+#    #+#             */
/*   Updated: 2022/04/15 01:27:33 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	Point(const float nx, const float ny);
	Point(const Point &point);
	Point &operator=(const Point &point);
	~Point();
	Fixed det_t(Point const &a, Point const &b, Point const &c) const;
	Fixed bc1(Point const &b, Point const &c, Fixed &det) const;
	Fixed bc2(Point const &a, Point const &c, Fixed &det) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif