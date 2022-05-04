/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:52:34 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 21:00:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp" 

Convert::Convert()
{
    std::cout << "Convert Default Constructor" << std::endl;
}

Convert::Convert(const Convert &convert)
{
    std::cout << "Convert Copy Constructor" << std::endl;
    *this = convert;
}

Convert::~Convert()
{
    std::cout << "Convert Default Destructor" << std::endl;
}

Convert &Convert::operator=(const Convert &convert)
{
    (void)convert;
    return *this;
}
