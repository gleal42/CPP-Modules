/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:57:33 by gleal             #+#    #+#             */
/*   Updated: 2022/05/03 03:47:15 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp" 

Form *FormMap::NewShrug(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *FormMap::NewRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *FormMap::NewPres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

// , maker[0](&FormMap::NewShrug), maker[1](&FormMap::NewRobot), maker[2](&FormMap::NewPres)
// : name[0]("shrubbery creation"), name[1]("robotomy request"), name[2]("presidential pardon")

const std::string FormMap::name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

Form *(FormMap::*maker[3])(std::string) = {&FormMap::NewShrug, &FormMap::NewRobot, &FormMap::NewPres};

FormMap::FormMap()
{
}

FormMap &FormMap::operator=(const FormMap &fmap)
{
	(void)fmap;
	return (*this);
}

FormMap::FormMap(const FormMap &fmap)
{
	(void)fmap;

}

FormMap::~FormMap()
{
}

Intern::Intern()
{
	std::cout << "Intern Default Constructor" << std::endl;
}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return *this;
}

Intern::Intern(const Intern &intern)
{
	std::cout << "Intern Copy Constructor" << std::endl;
	*this = intern;
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor" << std::endl;
}

