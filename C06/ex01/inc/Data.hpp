/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:15:02 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 00:42:11 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

struct Data{
private:
    std::string data;
public:
    Data();
    Data(std::string str);
    Data(const Data &data);
    ~Data();
    std::string getData() const;
    Data &operator=(const Data &data);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
