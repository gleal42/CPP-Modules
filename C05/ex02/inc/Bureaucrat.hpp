/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:00:52 by gleal             #+#    #+#             */
/*   Updated: 2022/05/02 16:59:32 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat {
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
    const std::string &getName() const;
    int     getGrade() const;
    void    increment_grade();
    void    decrement_grade();
    class GradeTooHighException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
    void signForm(Form &form);
    void executeForm(Form const & form);
};

#include "Form.hpp"

std::ostream &operator<<(std::ostream &output, Bureaucrat &bct);

#endif
