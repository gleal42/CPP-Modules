/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 04:04:52 by gleal             #+#    #+#             */
/*   Updated: 2022/04/30 03:51:37 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
   const std::string target; 
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string nm, const int mgs, const int mge);
    PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialpardonform);
    void execute(Bureaucrat const & executor) const;
};

#endif
