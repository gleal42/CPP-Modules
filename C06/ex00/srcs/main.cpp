/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:51:57 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 15:55:21 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>

void extra_tests()
{
    Convert a("0");
    a.print_all();
    std::cout << std::endl;

    Convert b("nan");
    b.print_all();
    std::cout << std::endl;

    a = "42.0f";
    b = a;
    b.print_all();
    std::cout << std::endl;

    // Extra tests
    std::cout << "Char tests" << std::endl;
    std::cout << std::endl;
    a = "a";
    a.print_all();
    std::cout << std::endl;
    a = "asf";
    a.print_all();
    std::cout << std::endl;
    a = "*";
    a.print_all();
    std::cout << std::endl;
    a = "-";
    a.print_all();
    std::cout << std::endl;
    std::cout << "Int tests" << std::endl;
    std::cout << std::endl;
    a = "20000000000";
    a.print_all();
    std::cout << std::endl;
    a = "-20000000000";
    a.print_all();
    std::cout << std::endl;
    a = "-42";
    a.print_all();
    std::cout << std::endl;
    a = "42";
    a.print_all();
    std::cout << std::endl;
    a = "+42";
    a.print_all();
    std::cout << std::endl;
    a = "3";
    a.print_all();
    std::cout << std::endl;
    a = "0";
    a.print_all();
    std::cout << std::endl;
    a = "-0";
    a.print_all();
    std::cout << std::endl;
    a = "--0";
    a.print_all();
    std::cout << std::endl;
    a = "++0";
    a.print_all();
    std::cout << std::endl;
    std::cout << "Float Test" << std::endl;
    std::cout << std::endl;
    a = "20000000000.0f";
    a.print_all();
    std::cout << std::endl;
    a = "-20000000000.0f";
    a.print_all();
    std::cout << std::endl;
    a = "800.f";
    a.print_all();
    std::cout << std::endl;
    a = "800.2453f";
    a.print_all();
    std::cout << std::endl;
    a = "-800.f";
    a.print_all();
    std::cout << std::endl;
    a = "-800.2453f";
    a.print_all();
    std::cout << std::endl;
    a = "423..f";
    a.print_all();
    std::cout << std::endl;
    a = "42.24.53f";
    a.print_all();
    std::cout << std::endl;
    a = "42.24.f3";
    a.print_all();
    std::cout << std::endl;
    a = "42.24. f";
    a.print_all();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Double Test" << std::endl;
    std::cout << std::endl;
    a = "20000000000.0";
    a.print_all();
    std::cout << std::endl;
    a = "-20000000000.0";
    a.print_all();
    std::cout << std::endl;
    a = "800.";
    a.print_all();
    std::cout << std::endl;
    a = "800.2453";
    a.print_all();
    std::cout << std::endl;
    a = "-800.";
    a.print_all();
    std::cout << std::endl;
    a = "-800.2453";
    a.print_all();
    std::cout << std::endl;
    a = "423..";
    a.print_all();
    std::cout << std::endl;
    a = "42.24.53";
    a.print_all();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "nanf/nan Test:" << std::endl;
    std::cout << std::endl;
    a = "nan";
    a.print_all();
    std::cout << std::endl;
    a = "nanf";
    a.print_all();
    std::cout << std::endl;
    a = "nanf222";
    a.print_all();
    std::cout << std::endl;
    a = "34nan";
    a.print_all();
    std::cout << std::endl;
    a = "34nanf";
    a.print_all();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "+inf/+inff Test:" << std::endl;
    std::cout << std::endl;
    a = "inf";
    a.print_all();
    std::cout << std::endl;
    a = "+inf";
    a.print_all();
    std::cout << std::endl;
    a = "+inf2222";
    a.print_all();
    std::cout << std::endl;
    a = "inff";
    a.print_all();
    std::cout << std::endl;
    a = "+inff";
    a.print_all();
    std::cout << std::endl;
    a = "+inff22222222";
    a.print_all();
    std::cout << std::endl;
    a = "+34inf";
    a.print_all();
    std::cout << std::endl;
    a = "+34inff";
    a.print_all();
    std::cout << std::endl;
    a = "34+inf";
    a.print_all();
    std::cout << std::endl;
    a = "34+inff";
    a.print_all();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "-inf/-inff Test:" << std::endl;
    std::cout << std::endl;
    a = "-inf";
    a.print_all();
    std::cout << std::endl;
    a = "-inf22222";
    a.print_all();
    std::cout << std::endl;
    a = "-inff";
    a.print_all();
    std::cout << std::endl;
    a = "-inff222222";
    a.print_all();
    std::cout << std::endl;
    a = "-34inf";
    a.print_all();
    std::cout << std::endl;
    a = "-34inff";
    a.print_all();
    std::cout << std::endl;
    a = "34-inf";
    a.print_all();
    std::cout << std::endl;
    a = "34-inff";
    a.print_all();
}

void    convert(char *literal)
{
    Convert a(literal);
    a.print_all();
}

int main(int argc, char **argv)
{
   if (argc == 2)
       convert(argv[1]);
    else
        extra_tests();
}