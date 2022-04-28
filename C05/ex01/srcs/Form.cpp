/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:38:19 by gleal             #+#    #+#             */
/*   Updated: 2022/04/28 04:04:24 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp" 

Form::Form() : name("Random"), is_signed(0), min_grade_sign(150) , min_grade_exec(150)
{
    std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(const std::string nm, const int mgs, const int mge) : name(nm), is_signed(0), min_grade_sign(mgs) , min_grade_exec(mge)
{
    std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(const Form &form) : name(form.name), is_signed(0), min_grade_sign(form.min_grade_sign) , min_grade_exec(form.min_grade_exec)
{
    std::cout << "Form Copy Constructor" << std::endl;
    *this = form;
}

Form::~Form()
{
    std::cout << "Form Default Destructor" << std::endl;
}

// Assignment operator to can be either used as a way to assign the form state or it should have no use

Form &Form::operator=(const Form &form)
{
    // is_signed = form.is_signed;
    std::cout << "Impossible to convert one form into another. Please create a new form and follow the appropriate steps" << std::endl;
    return *this;
}
