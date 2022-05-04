/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:57:33 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 01:23:05 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp" 


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


void Intern::makeForm(std::string form, std::string target)
{
	int index;
	Form *(Intern::*maker[3])(std::string) = {&Intern::NewPres, &Intern::NewRobot, &Intern::NewShrug};
	static const std::string name[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	index = basic_hash(form);
	(this->*(maker[index]))(target);
}
	// (form == name[index]) && (*maker[index])(target);

Form *Intern::NewShrug(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::NewRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::NewPres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

int Intern::basic_hash(std::string form)
{
	return ((form[0] + form.length() * 2) % 3);
}
