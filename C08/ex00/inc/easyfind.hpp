/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:14:55 by gleal             #+#    #+#             */
/*   Updated: 2022/05/09 21:56:48 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <array>
#include <algorithm>
#include <stdexcept>

//  || *temp == *container.end()

template <class T>
typename T::iterator	easyfind(T &container, int i)
{
	typename T::iterator temp = std::find(container.begin(), container.end(), i);
	if (temp != container.end())
		return temp;
	else
		throw std::invalid_argument("Value not found");
}

#endif
