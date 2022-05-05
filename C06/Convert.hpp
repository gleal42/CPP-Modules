/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:53:17 by gleal             #+#    #+#             */
/*   Updated: 2022/05/05 01:44:53 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class Convert{
private:
    double db;
    std::string char_rep;
    std::string int_rep;
    std::string float_rep;
    std::string double_rep;
    void char_conv(std::string &lit);
public:
    Convert();
    Convert(std::string literal);
    Convert(const Convert &convert);
    ~Convert();
    Convert &operator=(const Convert &convert);
    class ImpossibleException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
    class NonDisplayableException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
    void print_char();
};

#endif
