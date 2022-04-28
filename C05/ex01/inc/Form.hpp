/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:38:16 by gleal             #+#    #+#             */
/*   Updated: 2022/04/28 03:58:51 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat;

class Form{
private:
    const std::string name;
    bool is_signed;
    const int min_grade_sign;
    const int min_grade_exec;
public:
    Form();
    Form(const std::string nm, const int mgs, const int mge);
    Form(const Form &form);
    ~Form();
    Form &operator=(const Form &form);
    void beSigned(const Bureaucrat& bct);
};

std::ostream &operator<<(std::ostream &output, Form form);