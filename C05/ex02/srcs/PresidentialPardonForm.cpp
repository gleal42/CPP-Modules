/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 02:10:34 by gleal             #+#    #+#             */
/*   Updated: 2022/04/30 03:42:46 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp" 

PresidentialPardonForm::PresidentialPardonForm() : Form("Random", 25, 5)
{
    std::cout << "PresidentialPardonForm " << getName() << " was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string nm, const int minsign, const int minexec) : Form(nm, minsign, minexec)
{
    std::cout << "PresidentialPardonForm " << getName() << " was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform)
{
    std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
    *this = presidentialpardonform;
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned() || executor.getGrade() > getExecGrade())
        return ;
    std::cout << "Infornation: " << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
