/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:12:35 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 04:18:54 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <class T>
void    swap(T &a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T   min(T a, T b)
{
    if (a < b)
        return a;
    else
        return b;
}
template <class T>
T   max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

#endif
