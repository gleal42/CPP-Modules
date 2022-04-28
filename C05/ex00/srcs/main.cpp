/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:32:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/28 03:13:39 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    testing_constructor_throws()
{
    std::cout << std::endl;
    std::cout << "Testing Constructor Throws" << std::endl;
    std::cout << std::endl;
    // Testing construction with grade too high (the smaller the number the higher the grade)
    try {
        Bureaucrat a("John", -1);
        std::cout << a << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    // Testing construction with grade too low (the higher the number the lower the grade)
    try {
        Bureaucrat b("Peter", 151);
        std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    // Testing construction with mixed grades (invalid first)
    try
    {
        Bureaucrat c("Rosario", 152);
        std::cout << c << std::endl;
        Bureaucrat d("Rui", 15);
        std::cout << d << std::endl;
    } 
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    // Testing construction with mixed grades (invalid last)
    try
    {
        Bureaucrat e("Rogerio", 15);
        std::cout << e << std::endl;
        Bureaucrat f("Milton", 152);
        std::cout << f << std::endl;
    } 
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    // Testing construction with appropriate grade
    try {
        Bureaucrat g("Orlando", 15);
        std::cout << g << std::endl;
        throw g;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    } catch (Bureaucrat &temp) {
        std::cout << temp << std::endl;
    }
    // Testing copy construction with valid grades
    try
    {
        Bureaucrat h("Rui", 15);
        Bureaucrat i(h);
    } 
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    testing_increment_throws()
{
    std::cout << std::endl;
    std::cout << "Testing Increment Throws" << std::endl;
    Bureaucrat a("Andy", 1);
    Bureaucrat b("Holt", 2);
    Bureaucrat c("Terry", 3);
    try {
        a.increment_grade();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << a << std::endl;
    try {
        b.increment_grade();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << b << std::endl;
    try {
        c.increment_grade();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << c << std::endl;
}

void    testing_decrement_throws()
{
    std::cout << std::endl;
    std::cout << "Testing Decrement Throws" << std::endl;
    Bureaucrat a("Amy", 150);
    Bureaucrat b("Rosa", 149);
    Bureaucrat c("Gina", 148);
    try {
        a.decrement_grade();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << a << std::endl;
    try {
        b.decrement_grade();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << b << std::endl;
    try {
        c.decrement_grade();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << c << std::endl;
}

int main()
{
    std::cout << "Basic Tests" << std::endl;
    std::cout << std::endl;
    Bureaucrat a;
    Bureaucrat b("Ben", 1);
    std::cout << a << std::endl;
    std::cout << a.getGrade() << std::endl;
    std::cout << b << std::endl;
    std::cout << b.getName() << std::endl;
    std::cout << "Random = Ben" << std::endl;
    a = b;
    std::cout << "Assignment only copies grade because name is const" << std::endl;
    std::cout << a << std::endl;
    Bureaucrat c(a);
    std::cout << c << std::endl;
    testing_constructor_throws();
    testing_increment_throws();
    testing_decrement_throws();
    std::cout << "yyyyyyyyo" << std::endl;
}