/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 02:10:34 by gleal             #+#    #+#             */
/*   Updated: 2022/05/03 00:46:54 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp" 

PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", 25, 5), target("Random")
{
    std::cout << getName() << " which targets " << target << " was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
: Form("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << getName() << " which targets " << target << " was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pres)
: Form(pres.getName() , pres.getSignGrade(), pres.getExecGrade()), target(pres.target)
{
    std::cout << "PresidentialPardonForm:" << *this << "was copied" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default Destructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform)
{
    (void)presidentialpardonform;
    std::cout << "Impossible to change already existing Presidential Pardon form." << std::endl;
    std::cout << "Please create a new form using a constructor" << std::endl;
    return *this;
}

void PresidentialPardonForm::action() const
{
    std::cout << "Infornation: " << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
