/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:38:16 by gleal             #+#    #+#             */
/*   Updated: 2022/04/29 04:02:28 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

# include "Bureaucrat.hpp"

class Form{
private:
    const std::string name;
    bool is_signed;
    const int min_grade_sign;
    const int min_grade_exec;
public:
    /* ---------------------------------- ex01 ---------------------------------- */
    Form();
    Form(const std::string nm, const int mgs, const int mge);
    Form(const Form &form);
    ~Form();
    Form &operator=(const Form &form);
    const std::string &getName() const;
    const int    &getSignGrade() const;
    const int    &getExecGrade() const;
    const bool    &getIsSigned() const;
    void beSigned(const Bureaucrat& bct);
    /* ---------------------------------- ex02 ---------------------------------- */
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &output, Form &form);

#endif
