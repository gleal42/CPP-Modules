/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:56:58 by gleal             #+#    #+#             */
/*   Updated: 2022/05/03 03:45:20 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

struct FormMap{
	private:
		static const std::string name[3];
		static Form *(FormMap::*maker[3])(std::string);
	public:
		FormMap();
		FormMap &operator=(const FormMap &fmap);
		FormMap(const FormMap &fmap);
		~FormMap();
		Form *NewShrug(std::string target);
		Form *NewRobot(std::string target);
		Form *NewPres(std::string target);
};

class Intern{
private:
	FormMap fm;
public:
	Intern();
	Intern &operator=(const Intern &intern);
	Intern(const Intern &intern);
	~Intern();
};


#endif
