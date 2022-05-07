/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:52:48 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 02:25:38 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Converted class A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Converted class B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Converted class C" << std::endl;
    else
        std::cout << "No valid conversion available" << std::endl;
}

void identify(Base& p)
{
    try {
        A a = dynamic_cast<A &>(p);
        std::cout << "Converted class A" << std::endl;
        return ;
    }
    catch (std::exception &e){
    }
    try {
        B b = dynamic_cast<B &>(p);
        std::cout << "Converted class B" << std::endl;
        return ;
    }
    catch (std::exception &e){
    }
    try {
        C c = dynamic_cast<C &>(p);
        std::cout << "Converted class C" << std::endl;
        return ;
    }
    catch (std::exception &e){
    }
    std::cout << "No valid conversion available" << std::endl;
}

Base * generate(void)
{
    std::srand(time(NULL));
    int d = rand() % 3;
    switch (d)
    {
    case 0:
        return (new A);
    case 1:
        return (new B);
    case 2:
        return (new C);
    default:
        return (NULL);
    }
}
