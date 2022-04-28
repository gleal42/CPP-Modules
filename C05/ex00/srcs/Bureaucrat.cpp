/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:00:36 by gleal             #+#    #+#             */
/*   Updated: 2022/04/27 22:03:52by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Random")
{
    srand (time(NULL));
    grade = 1 + rand() % 150;
    std::cout << "Bureaucrat " << getName() << ", with grade " << getGrade() << ", was created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string nname, int ngrade) : name(nname), grade(ngrade)
{
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
    std::cout << "Bureaucrat " << getName() << ", with grade " << getGrade() << ", was created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade)
{
    std::cout << "A new copy of Bureaucrat " << getName() << ", with grade " << getGrade() << ", was made" << std::endl;
}

// Since Bureaucrats have a const name, it is assumed that only the grade is meant to be copied with assign operator

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    this->grade = bureaucrat.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << getName() << ", with grade " << getGrade() << ", was destroyed" << std::endl;
}

int &Bureaucrat::getGrade()
{
    return (grade);
}

const std::string &Bureaucrat::getName()
{
    return (name);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat's Grade is too High (Integer value is too low)");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat's Grade is too Low (Integer value is too high)");
}

void    Bureaucrat::increment_grade()
{
    if (getGrade() - 1 < 1) {
        throw GradeTooHighException();
    }
    this->grade--;
}

void    Bureaucrat::decrement_grade()
{
    if (grade + 1 > 150) {
        throw GradeTooLowException();
    }
    this->grade++;
}

std::ostream &operator<<(std::ostream &output, Bureaucrat &bct)
{
    output << bct.getName() << ", bureaucrat grade " << bct.getGrade() << ".";
    return output;
}