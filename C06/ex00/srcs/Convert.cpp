/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:52:34 by gleal             #+#    #+#             */
/*   Updated: 2022/05/06 05:07:21 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp" 

Convert::Convert()
{
    std::cout << "Convert Default Constructor" << std::endl;
}

Convert::Convert(std::string literal)
{
    std::cout << "Lets Convert " << literal << std::endl;
    db = std::strtod(literal.c_str(), NULL);
    ct = find_conv(literal);
    void (Convert::*conv[6])(std::string &) = {&Convert::char_conv, &Convert::int_conv, &Convert::other_conv};
    (this->*conv[ct])(literal);
}

Convert::Convert(const Convert &convert)
{
    std::cout << "Convert Copy Constructor" << std::endl;
    *this = convert;
}

Convert::~Convert()
{
    // std::cout << "Convert Default Destructor" << std::endl;
}

Convert &Convert::operator=(const Convert &convert)
{
    (void)convert;
    return *this;
}

bool edge_case(std::string &lit)
{
    if (lit == "-inff"
    || lit == "+inff"
    || lit == "nanf"
    || lit == "+inf"
    || lit == "-inf"
    || lit == "nan"
    || lit == "null"
    || lit == "NULL")
        return true;
    else
        return false;
}

enum ConvertType Convert::find_conv(std::string &lit)
{
    if (lit.length() == 1 && !isdigit(lit[0])) 
        return (CHAR);
    else if (edge_case(lit))
        return (EDGE);
    else if (lit.find_first_not_of(".f+-0123456789") != std::string::npos
        || lit.find_first_of("0123456789") == std::string::npos
        || (lit.find_last_of("+-") != std::string::npos && lit.find_last_of("+-") != 0)
        || (lit.find_first_of("f") != std::string::npos && lit.find_first_of("f") != lit.length() - 1)
        || (lit.find_first_of("f") != std::string::npos && lit.find_first_of(".") == std::string::npos)
        || (lit.find_first_of(".") != std::string::npos && lit.find_first_of(".") != lit.find_last_of(".")))
        return (OTHER);
    else
    {
        if (lit.find_first_of(".") != std::string::npos)
        {
            if (lit.find_first_of("f") != std::string::npos)
                return (FLOAT);
            else
                return (DOUBLE);
        }
        else
            return (INT);
    }
}

void    Convert::char_conv(std::string &lit)
{
    char c = *lit.c_str();
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << std::setprecision(1);
    std::cout.setf( std::ios::fixed, std:: ios::floatfield);
    std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void    Convert::int_conv(std::string &lit)
{
    double d = strtod(lit.c_str(), NULL);

    if (!isprint(d))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(d) << std::endl;
    if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << std::setprecision(1);
    std::cout.setf( std::ios::fixed);
    std::cout.setf( std::ios::fixed, std:: ios::floatfield);
    if (d > std::numeric_limits<float>::infinity())
        std::cout << "float: +inff" << std::endl;
    else if (d < -std::numeric_limits<float>::infinity())
        std::cout << "float: -inff" << std::endl;
    else if (d != static_cast<float>(d))
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
    if (d > std::numeric_limits<double>::infinity())
        std::cout << "double: +inf" << std::endl;
    else if (d < -std::numeric_limits<double>::infinity())
        std::cout << "double: -inf" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void    Convert::other_conv(std::string &lit)
{
    (void)lit;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

// std::cout << "char: " << "Non displayable" << std::endl;