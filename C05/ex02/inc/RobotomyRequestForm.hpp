/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 04:08:11 by gleal             #+#    #+#             */
/*   Updated: 2022/04/30 03:53:07 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
   const std::string target; 
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string target)
    RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyrequestform);
    void execute(Bureaucrat const & executor) const;
};

#endif
