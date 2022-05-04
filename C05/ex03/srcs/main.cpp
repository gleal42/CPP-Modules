/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:32:47 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 00:40:53 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
    std::cout << "Basic Tests" << std::endl;
    std::cout << std::endl;

    // Form test;
    Intern john;
    // Intern::basic_hash("presidential pardon");
    // Intern::basic_hash("shrubbery creation");
    // Intern::basic_hash("robotomy request");
    // Intern::basic_hash(0);
    john.makeForm("robotomy request", "Ricardo");
    john.makeForm("", "Ricardo");
}
