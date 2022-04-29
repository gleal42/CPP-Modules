/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 04:08:11 by gleal             #+#    #+#             */
/*   Updated: 2022/04/29 04:09:48 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyrequestform);
    void execute(Bureaucrat const & executor) const;
};

#endif
