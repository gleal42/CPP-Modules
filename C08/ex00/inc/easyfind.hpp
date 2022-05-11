/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:14:55 by gleal             #+#    #+#             */
/*   Updated: 2022/05/10 18:46:25 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <array>
#include <algorithm>
#include <stdexcept>

template <class T>
typename T::iterator	easyfind(T &container, int i)
{
	typename T::iterator temp = std::find(container.begin(), container.end(), i);
	if (temp == container.end())
		throw std::invalid_argument("Value not found");
	return temp;
}

#endif
