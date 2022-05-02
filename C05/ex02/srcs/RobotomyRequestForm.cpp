/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 03:41:44 by gleal             #+#    #+#             */
/*   Updated: 2022/04/30 04:00:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp" 

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 145, 137) , target("Random")
{
    std::cout << "RobotomyRequestForm which targets " << target << " was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: Form("RobotomyRequestForm", 145, 137) , target(target)
{
    std::cout << "RobotomyRequestForm which targets " << target << " was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotreqform)
: Form(robotreqform.getName() , robotreqform.getIsSigned(), robotreqform.getExecGrade()), target(robotreqform.target)
{
    std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
    *this = robotreqform;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default Destructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform)
{
    (void)robotomyrequestform;
    std::cout << "Impossible to change already existing Robotomy Request Form." << std::endl;
    std::cout << "Please create a new form using a constructor" << std::endl;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    // Fazer funcoes Action na Base Class que vai ser a unica coisa que vai mudar.
    // A Funcao executa vai estar só na base class

    if (!getIsSigned() || executor.getGrade() > getExecGrade())
        return ;
    srand(time(NULL));
    if (rand() % 2) {
        std::cout << "Attention: " << target << " has been robotomized" << std::endl;
    } else {
        std::cout << "Whoops: Robotomy failed" << std::endl;
    }
}