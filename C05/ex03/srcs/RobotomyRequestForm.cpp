/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 03:41:44 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 17:38:17 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp" 

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 72, 45) , target("Random")
{
    std::cout << getName() << " which targets " << target << " was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: Form("RobotomyRequestForm", 72, 45) , target(target)
{
    std::cout << getName() << " which targets " << target << " was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotreqform)
: Form(robotreqform.getName() , robotreqform.getSignGrade(), robotreqform.getExecGrade()), target(robotreqform.target)
{
    std::cout << "RobotomyRequestForm:" << *this << "was copied" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << getName() << " which targets " << target << " was destroyed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform)
{
    (void)robotomyrequestform;
    std::cout << "Impossible to change already existing Robotomy Request Form." << std::endl;
    std::cout << "Please create a new form using a constructor" << std::endl;
    return *this;
}

void RobotomyRequestForm::action() const
{
    srand(time(NULL));
    if (rand() % 2) {
        std::cout << "Attention: " << target << " has been robotomized" << std::endl;
    } else {
        std::cout << "Whoops: Robotomy failed" << std::endl;
    }
}