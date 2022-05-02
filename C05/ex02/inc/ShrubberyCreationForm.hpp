/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 04:08:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/30 03:51:34 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
   const std::string target; 
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string nm, const int mgs, const int mge);
    ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberycreationform);
    void execute(Bureaucrat const & executor) const;
};

#endif
