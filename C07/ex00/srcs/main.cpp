/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:49:56 by gleal             #+#    #+#             */
/*   Updated: 2022/05/12 20:26:10 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Awesome.hpp"
#include "Bad.hpp"

int extra_test()
{
    std::cout << std::endl;
    std::cout << "Extra tests from eval sheet" << std::endl;
    Awesome a(2), b(4);
    swap(a, b);
    std::cout << a << " " << b << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    return (0);
}

/* swap will still work for Bad class because
equal sign operator is mandatory for canonycal form */

void invalid_test()
{
    // std::cout << std::endl;
    // std::cout << "Invalid tests" << std::endl;
    // std::cout << std::endl;
    // char c = 'a';
    // int a = 45;
    // min (a, c);
    // max (a, c);
    // swap (a, c);

    // Bad person1;
    // Bad person2;
    // min(person1, person2);
    // max(person1, person2);
    // swap(person1, person2);
}

int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    extra_test();
    invalid_test();

    return 0;
}