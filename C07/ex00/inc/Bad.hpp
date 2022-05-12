/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bad.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:01:12 by gleal             #+#    #+#             */
/*   Updated: 2022/05/12 20:02:28 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BAD_HPP
# define BAD_HPP

#include <iostream>
#include <string>

class Bad{
private:
    std::string str;
public:
    Bad();
    Bad(const Bad &bad);
    ~Bad();
    Bad &operator=(const Bad &bad);
};

#endif
