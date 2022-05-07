/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:53:17 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 18:25:14 by gleal            ###   ########.fr       */
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
    FLOAT,
    DOUBLE,
    EDGE,
    OTHER,
};

class Convert{
private:
    std::string lit;
    enum ConvertType ct;
    void char_conv();
    void int_conv();
    void float_conv();
    void double_conv();
    void edge_conv();
    void other_conv();
    enum ConvertType find_conv();
    bool edge_case(std::string &lit);
    int find_precision(std::string &lit);
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
