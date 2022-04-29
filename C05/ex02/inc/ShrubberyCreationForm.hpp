/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 04:08:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/29 04:09:54 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
    
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberycreationform);
    void execute(Bureaucrat const & executor) const;
};

#endif
