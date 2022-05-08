/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:51:57 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 01:40:56 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>

void extra_tests()
{
    Convert a;
    // Extra tests
    std::cout << "Char tests" << std::endl;
    a = "a";
    a.print_all();
    a = "asf";
    a.print_all();
    a = "*";
    a.print_all();
    a = "-";
    a.print_all();
    std::cout << std::endl;
    std::cout << "Int tests" << std::endl;
    a = "20000000000";
    a.print_all();
    a = "-20000000000";
    a.print_all();
    a = "-42";
    a.print_all();
    a = "42";
    a.print_all();
    a = "+42";
    a.print_all();
    a = "3";
    a.print_all();
    a = "0";
    a.print_all();
    a = "-0";
    a.print_all();
    a = "--0";
    a.print_all();
    a = "++0";
    a.print_all();
    std::cout << std::endl;
    std::cout << "Float Test" << std::endl;
    a = "20000000000.0f";
    a.print_all();
    a = "-20000000000.0f";
    a.print_all();
    a = "800.f";
    a.print_all();
    a = "800.2453f";
    a.print_all();
    a = "-800.f";
    a.print_all();
    a = "-800.2453f";
    a.print_all();
    a = "423..f";
    a.print_all();
    a = "42.24.53f";
    a.print_all();
    a = "42.24.f3";
    a.print_all();
    a = "42.24. f";
    a.print_all();

    std::cout << std::endl;
    std::cout << "Double Test" << std::endl;
    a = "20000000000.0";
    a.print_all();
    a = "-20000000000.0";
    a.print_all();
    a = "800.";
    a.print_all();
    a = "800.2453";
    a.print_all();
    a = "-800.";
    a.print_all();
    a = "-800.2453";
    a.print_all();
    a = "423..";
    a.print_all();
    a = "42.24.53";
    a.print_all();

    std::cout << std::endl;
    std::cout << "nanf/nan Test:" << std::endl;
    a = "nan";
    a.print_all();
    a = "nanf";
    a.print_all();
    a = "nanf222";
    a.print_all();
    a = "34nan";
    a.print_all();
    a = "34nanf";
    a.print_all();

    std::cout << std::endl;
    std::cout << "+inf/+inff Test:" << std::endl;
    a = "inf";
    a.print_all();
    a = "+inf";
    a.print_all();
    a = "+inf2222";
    a.print_all();
    a = "inff";
    a.print_all();
    a = "+inff";
    a.print_all();
    a = "+inff22222222";
    a.print_all();
    a = "+34inf";
    a.print_all();
    a = "+34inff";
    a.print_all();
    a = "34+inf";
    a.print_all();
    a = "34+inff";
    a.print_all();

    std::cout << std::endl;
    std::cout << "-inf/-inff Test:" << std::endl;
    a = "-inf";
    a.print_all();
    a = "-inf22222";
    a.print_all();
    a = "-inff";
    a.print_all();
    a = "-inff222222";
    a.print_all();
    a = "-34inf";
    a.print_all();
    a = "-34inff";
    a.print_all();
    a = "34-inf";
    a.print_all();
    a = "34-inff";
    a.print_all();
}

void    convert(char *literal)
{
    Convert a(literal);
    Convert b("1000");
    a.print_all();
    b.print_all();

    a = b;
    a.print_all();


}

int main(int argc, char **argv)
{
   if (argc == 2)
       convert(argv[1]);
    else
        extra_tests();
}