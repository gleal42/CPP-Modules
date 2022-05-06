/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:53:17 by gleal             #+#    #+#             */
/*   Updated: 2022/05/06 04:31:27 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

enum ConvertType {
    CHAR,
    INT,
    OTHER,
    FLOAT,
    DOUBLE,
    EDGE,
};

class Convert{
private:
    double db;
    enum ConvertType ct;
    void char_conv(std::string &lit);
    void int_conv(std::string &lit);
    void other_conv(std::string &lit);
    enum ConvertType find_conv(std::string &lit);
    class ImpossibleException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
    class NonDisplayableException : public std::exception {
        private:
            virtual const char* what() const throw();
    };
public:
    Convert();
    Convert(std::string literal);
    Convert(const Convert &convert);
    ~Convert();
    Convert &operator=(const Convert &convert);
    void print_all();
};

#endif
