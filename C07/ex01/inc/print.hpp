#ifndef PRINT_HPP
# define PRINT_HPP

#include <iostream>

template< typename T >
void print( T const & x )
{
    std::cout << x << std::endl;
    return;
}

#endif
