/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:38:19 by gleal             #+#    #+#             */
/*   Updated: 2022/05/06 23:40:37 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp" 

Form::Form() : name("Random"), is_signed(0), min_grade_sign(150) , min_grade_exec(150)
{
    std::cout << "Form " << name << " was created" << std::endl;
}

Form::Form(const std::string nm, const int mgs, const int mge) : name(nm), is_signed(0), min_grade_sign(mgs) , min_grade_exec(mge)
{
    if (min_grade_sign < 1 || min_grade_exec < 1)
        throw GradeTooHighException();
    else if (min_grade_sign > 150 || min_grade_exec > 150)
        throw GradeTooLowException();
    std::cout << "Form " << name << " was created" << std::endl;
}

Form::Form(const Form &form) : name(form.name), is_signed(0), min_grade_sign(form.min_grade_sign) , min_grade_exec(form.min_grade_exec)
{
    std::cout << "Form Copy Constructor" << std::endl;
    std::cout << "A new copy of Form " << getName() << ", with grade " << getSignGrade() << ", was made" << std::endl;
    *this = form;
}

Form::~Form()
{
    std::cout << "Form " << name << " was destroyed" << std::endl;
}

// Assignment operator to could be either used as a way to assign the form state or it should have no use

Form &Form::operator=(const Form &form)
{
    // is_signed = form.is_signed;
    (void)form;
    std::cout << "Impossible to change already existing form." << std::endl;
    std::cout << "Please create a new form using a constructor" << std::endl;
    return *this;
}

const std::string &Form::getName() const
{
    return (this->name);
}

const int    &Form::getSignGrade() const
{
    return (this->min_grade_sign);
}

const int    &Form::getExecGrade() const
{
    return (this->min_grade_exec);
}

const bool  &Form::getIsSigned() const
{
    return (this->is_signed);
}

void Form::beSigned(const Bureaucrat& bct)
{
    if (bct.getGrade() > this->getSignGrade()) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->is_signed = true;
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form's Grade is too High (Integer value is too low)");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form's Grade is too Low (Integer value is too high)");
}

std::ostream &operator<<(std::ostream &output, Form &form)
{
    output << std::endl;
    output << "Form name: " << form.getName() << std::endl;
    output << "Form Minimum Sign Grade: " << form.getSignGrade() << std::endl;
    output << "Form Minimum Exec Grade: " << form.getExecGrade() << std::endl;
    output << "The Form has " << (form.getIsSigned() ?  "been signed already" : "not been signed yet") << std::endl;
    return output;
}

const char* Form::NotSignedException::what() const throw()
{
    return ("Form has not been signed yet");
}

void Form::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned()) {
        throw NotSignedException();
    } else if (executor.getGrade() > getExecGrade()) {
        throw Bureaucrat::GradeTooLowException() ;
    }
    action();
}
