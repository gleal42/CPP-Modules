/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:50:17 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 20:27:15 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "print.hpp"
#include "change.hpp"
#include "Awesome.hpp"
#include <iostream>

void add_and_print(int d)
{
    d = d + 1;
    std::cout << d << std::endl;
}

bool is_digit(int d)
{
    std::cout << ((d > '0' && d < '9') ?  "true" : "false") << std::endl;
    return (d > '0' && d < '9') ?  true : false;
}

int main()
{
    int a[] = {2, 3, 5, 7};

    size_t b = 4;
    iter(a, b, add_and_print);
    std::cout << std::endl;

    char c[] = "Ola01234";
    iter( c, 8, is_digit );
    std::cout << std::endl;
    // still need to specify that it is not const (char template specification)
    iter( c, 8, &change<char>);
    iter( c, 8, print );
    std::cout << std::endl;

    std::cout << "Extra" << std::endl;
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    iter( tab, 5, print );
    std::cout << std::endl;
    iter( tab2, 5, print );
    return 0;
}
