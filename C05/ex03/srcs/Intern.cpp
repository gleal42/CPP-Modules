/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:57:33 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 00:07:46 by gleal            ###   ########.fr       */
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
	Form *(Intern::*maker[3])(std::string) = {&Intern::NewRobot, &Intern::NewShrug, &Intern::NewPres};
	static const std::string name[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
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
	int value = 0;
	for (size_t i = 0; i < form.length(); i++)
		value += form[i] * (i + 3);
	std::cout << (value % 3) << std::endl;
	return (value % 3);
}
