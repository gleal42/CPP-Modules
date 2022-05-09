/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:26:48 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 19:44:14 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

// In order to use functions with different return values (outside template)

template <class T, class U>
void    iter(T ptr[], std::size_t len, U ft)
{
    for (std::size_t i = 0; i < len; i++) {
       ft(ptr[i]);
    }
    return ;

}
// In order a template function like print we must use this

template <class T>
void    iter(T ptr[], std::size_t len, void (*ft)(T const &))
{
    for (std::size_t i = 0; i < len; i++) {
       ft(ptr[i]);
    }
    return ;
}
// In order to apply template functions in which we can change the values

template <class T>
void    iter(T ptr[], std::size_t len, void (*ft)(T &))
{
    for (std::size_t i = 0; i < len; i++) {
       ft(ptr[i]);
    }
    return ;
}

#endif
