/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:27:52 by gleal             #+#    #+#             */
/*   Updated: 2022/04/13 22:59:48 by gleal            ###   ########.fr       */
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
	Fixed get_x( void ) const;
	Fixed get_y( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif