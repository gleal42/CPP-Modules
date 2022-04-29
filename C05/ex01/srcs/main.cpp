/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:32:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/29 03:04:53 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void invalid_form_tests()
{
    std::cout << std::endl;
    std::cout << "Invalid Form Tests" << std::endl;
    std::cout << std::endl;
    std::cout << "Grade to High examples" << std::endl;
    try {
        Form c("Failed form", 0, 50);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Form d("Failed form", 50, 0);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Form e("Failed form", 0, 0);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Grade too low examples" << std::endl;
    try {
        Form h("Failed form", 151, 2);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Form i("Failed form", 2, 151);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Grade Mixed examples" << std::endl;
    try {
        Form f("Failed form", 0, 151);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Form g("Failed form", 151, 0);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

void    bureaucratsigntests()
{
    std::cout << std::endl;
    std::cout << "Bureaucrat Signing tests" << std::endl;
    std::cout << std::endl;

    Form a("President form", 10, 20);

    std::cout << "Test 1 Bureaucrat with low level" << std::endl;
    Bureaucrat pl ("Paulo", 15);
    pl.signForm(a);
    std::cout << a << std::endl;

    std::cout << "Test 2 Bureaucrat sign level enough" << std::endl;
    Bureaucrat mrs ("Marcelo Rebelo de Sousa", 1);
    mrs.signForm(a);
    std::cout << a << std::endl;

    std::cout << std::endl;
    std::cout << "Test 3 signing twice" << std::endl;
    try {
        pl.signForm(a);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    Form b("Medium Form", 12, 30);
    std::cout << "Test 4 try catch inside try catch" << std::endl;
    try {
        pl.signForm(b);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << b << std::endl;
    std::cout << "Test 5 Signing directly (without bureacrat)" << std::endl;
    try {
        b.beSigned(mrs);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << b << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::cout << "Basic Tests" << std::endl;
    std::cout << std::endl;
    Form a;
    std::cout << a << std::endl;
    Form b("Important form", 10, 5);
    std::cout << b << std::endl;

    invalid_form_tests();
    bureaucratsigntests();
}