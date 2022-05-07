/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:23:23 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 00:46:33 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp" 

Data::Data()
{
    std::cout << "Data Default Constructor (Random String)" << std::endl;
    data = "Random";
}

Data::Data(std::string str)
{
    std::cout << "Will construct Data with string " << str << std::endl;
    data = str;
}

Data::Data(const Data &data)
{
    std::cout << "Data Copy Constructor" << std::endl;
    *this = data;
}

Data::~Data()
{
    std::cout << "Data Default Destructor" << std::endl;
}

Data &Data::operator=(const Data &data)
{
    this->data=data.data;
    return *this;
}

std::string Data::getData() const
{
    return (data);
}