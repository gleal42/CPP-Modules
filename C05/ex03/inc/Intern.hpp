/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:56:58 by gleal             #+#    #+#             */
/*   Updated: 2022/05/03 22:47:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
private:
	Form *NewShrug(std::string target);
	Form *NewRobot(std::string target);
	Form *NewPres(std::string target);
public:
	Intern();
	Intern &operator=(const Intern &intern);
	Intern(const Intern &intern);
	~Intern();
	void makeForm(std::string form, std::string target);
	static int basic_hash(std::string form);
};


#endif
