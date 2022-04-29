/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 04:04:52 by gleal             #+#    #+#             */
/*   Updated: 2022/04/29 04:07:59 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialpardonform);
    void execute(Bureaucrat const & executor) const;
};

#endif
