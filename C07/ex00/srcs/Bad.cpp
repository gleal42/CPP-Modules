/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bad.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:01:56 by gleal             #+#    #+#             */
/*   Updated: 2022/05/12 20:02:36 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bad.hpp" 

Bad::Bad()
{
    std::cout << "Bad Default Constructor" << std::endl;
}

Bad::Bad(const Bad &bad)
{
    std::cout << "Bad Copy Constructor" << std::endl;
    *this = bad;
}

Bad::~Bad()
{
    std::cout << "Bad Default Destructor" << std::endl;
}

Bad &Bad::operator=(const Bad &bad)
{
    this->str=bad.str;
    return *this;
}
