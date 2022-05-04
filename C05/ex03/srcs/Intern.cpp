/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:57:33 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 17:50:56 by gleal            ###   ########.fr       */
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
	std::cout << "The intern has no name, no grade, no unique characteristics." << std::endl;
	return *this;
}

Intern::Intern(const Intern &intern)
{
	(void)intern;
	std::cout << "Intern Copy Constructor" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor" << std::endl;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	try {
		Form *temp = createform(form, target);
		std::cout << "Intern creates " << temp->getName() << std::endl;
		return (temp);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

Form *Intern::NewShrub(std::string target)
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

// std::cout << ((form[0] + form.length() * 2) % 3) << std::endl;

int Intern::basic_hash(std::string form)
{
	return ((form[0] + form.length() * 2) % 3);
}

Form *Intern::createform(std::string form, std::string target)
{
	static const std::string name[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	static Form *(Intern::*maker[3])(std::string) = {&Intern::NewPres, &Intern::NewShrub, &Intern::NewRobot};

	if (form.empty())
		throw EmptyFormException();
	string_to_lower(form);
	if  (form != name[basic_hash(form)])
		throw UnavailableFormException();
	return (this->*(maker[basic_hash(form)]))(target);
}

const char*Intern::UnavailableFormException::what() const throw()
{
	return ("Form is not available");
}

const char*Intern::EmptyFormException::what() const throw()
{
	return ("Form is empty");
}

void	string_to_lower(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::tolower(str[i]);
}
