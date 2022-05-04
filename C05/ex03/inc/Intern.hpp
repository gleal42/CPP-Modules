/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:56:58 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 03:18:43 by gleal            ###   ########.fr       */
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
	Form *NewShrub(std::string target);
	Form *NewRobot(std::string target);
	Form *NewPres(std::string target);
	Form *createform(std::string form, std::string target);
	static int basic_hash(std::string form);
public:
	Intern();
	Intern &operator=(const Intern &intern);
	Intern(const Intern &intern);
	~Intern();
	Form *makeForm(std::string form, std::string target);
    class UnavailableFormException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
    class EmptyFormException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
};

void	string_to_lower(std::string &str);

#endif
