/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:32:47 by gleal             #+#    #+#             */
/*   Updated: 2022/04/30 02:45:13 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "Basic Tests" << std::endl;
    std::cout << std::endl;
    
   ShrubberyCreationForm form;
   Bureaucrat john("John Kennedy", 1);
   
  form.execute(john);
}