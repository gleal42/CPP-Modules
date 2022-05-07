/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:14:05 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 00:46:38 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data original("Testinggg");
    std::cout << &original << std::endl;
    std::cout << original.getData() << std::endl;

    uintptr_t store = serialize(&original);
    std::cout << store << std::endl;

    Data *after = deserialize(store);
    std::cout << after << std::endl;
    std::cout << after->getData() << std::endl;

    return 0;
}
