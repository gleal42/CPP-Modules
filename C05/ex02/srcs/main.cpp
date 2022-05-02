/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:32:47 by gleal             #+#    #+#             */
/*   Updated: 2022/05/03 00:54:57 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void    shrubbery_tests()
{
    std::cout << std::endl;
    std::cout << "Shrubbery Form Tests" << std::endl;
    std::cout << std::endl;
    ShrubberyCreationForm shrub1;
    ShrubberyCreationForm shrub2("official");
    ShrubberyCreationForm shrub3(shrub1);
    shrub3 = shrub2;
    std::cout << std::endl;
    Bureaucrat farm("Farmer", 146);
    Bureaucrat stud("Student", 145);
    Bureaucrat intern("Intern", 138);
    Bureaucrat pres("President", 137);

    farm.signForm(shrub1);
    stud.signForm(shrub2);
    intern.executeForm(shrub2);
    pres.executeForm(shrub1);
    pres.executeForm(shrub2);

    std::cout << std::endl;
}

void    robotomy_tests()
{
    std::cout << std::endl;
    std::cout << "Robotomy Form Tests" << std::endl;
    std::cout << std::endl;
    RobotomyRequestForm robot1;
    RobotomyRequestForm robot2("official");
    RobotomyRequestForm robot3(robot1);
    robot3 = robot2;
    std::cout << std::endl;
    Bureaucrat farm("Farmer", 73);
    Bureaucrat stud("Student", 72);
    Bureaucrat intern("Intern", 46);
    Bureaucrat pres("President", 45);

    farm.signForm(robot1);
    stud.signForm(robot2);
    intern.executeForm(robot2);
    pres.executeForm(robot1);
    pres.executeForm(robot2);
    std::cout << std::endl;
}

void    presi_tests()
{
    std::cout << std::endl;
    std::cout << "President Form Tests" << std::endl;
    std::cout << std::endl;

    PresidentialPardonForm presi1;
    PresidentialPardonForm presi2("official");
    PresidentialPardonForm presi3(presi1);
    presi3 = presi2;
    std::cout << std::endl;
    Bureaucrat farm("Farmer", 26);
    Bureaucrat stud("Student", 25);
    Bureaucrat intern("Intern", 6);
    Bureaucrat pres("President", 5);

    farm.signForm(presi1);
    stud.signForm(presi2);
    intern.executeForm(presi2);
    pres.executeForm(presi1);
    pres.executeForm(presi2);
    std::cout << std::endl;
}

int main()
{
    std::cout << "Basic Tests" << std::endl;
    std::cout << std::endl;

    // Form test;
    shrubbery_tests();
    robotomy_tests();
    presi_tests(); 
}