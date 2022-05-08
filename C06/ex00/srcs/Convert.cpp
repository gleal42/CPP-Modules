/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:52:34 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 15:57:09 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp" 

Convert::Convert()
{
    // std::cout << "Default Constructor" << std::endl;
}

Convert::Convert(std::string literal)
{
    lit = literal;
    // std::cout << "Lets Convert " << literal << std::endl;
}

Convert::Convert(const Convert &convert)
{
    // std::cout << "Convert Copy Constructor" << std::endl;
    *this = convert;
}

Convert::~Convert()
{
    // std::cout << "Convert Default Destructor" << std::endl;
}

Convert &Convert::operator=(const Convert &convert)
{
    this->lit = convert.lit;
    return *this;
}

Convert &Convert::operator=(std::string literal)
{
    this->lit = literal;
    return *this;
}


bool Convert::edge_case(std::string &lit)
{
    if (lit == "-inff"
    || lit == "+inff"
    || lit == "inff"
    || lit == "nanf"
    || lit == "inf"
    || lit == "+inf"
    || lit == "-inf"
    || lit == "nan")
        return true;
    else
        return false;
}

enum ConvertType Convert::find_conv()
{
    const size_t fst_dot = lit.find_first_of(".");
    const size_t fst_f = lit.find_first_of("f");

    if (lit.length() == 1 && !isdigit(lit[0])) 
        return (CHAR);
    else if (edge_case(lit))
        return (EDGE);
    else if (lit.find_first_not_of(".f+-0123456789") != std::string::npos
        || lit.find_first_of("0123456789") == std::string::npos
        || (lit.find_last_of("+-") != std::string::npos && lit.find_last_of("+-") != 0)
        || (fst_f != std::string::npos && fst_f != lit.length() - 1)
        || (fst_dot != std::string::npos && fst_dot != lit.find_last_of("."))
        || (fst_f != std::string::npos && fst_dot == std::string::npos))
        return (OTHER);
    if (fst_dot != std::string::npos)
    {
        if (fst_f != std::string::npos)
            return (FLOAT);
        return (DOUBLE);
    }
    return (INT);
}

int Convert::find_precision(std::string &lit)
{
    size_t t = lit.find('.');
    size_t end = (lit.find('f') == std::string::npos ? lit.length() - 1 : lit.find('f') - 1);
    if (t == std::string::npos || t == end)
        return (1);
    else
        return (end - t);
}

void    Convert::char_conv()
{
    char c = *lit.c_str();
    if (!isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout <<  "char: " << '\'' << c << '\'' << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout.setf( std::ios::fixed, std:: ios::floatfield);
    std::cout << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void    Convert::int_conv()
{
    std::stringstream lit_i(lit);
    int i = 0;

    lit_i >> i;
    if (lit_i.fail() || !lit_i.eof())
        return (this->other_conv());
    if (i > std::numeric_limits<char>::max() || i < std::numeric_limits<char>::min())
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(i))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << '\'' << static_cast<char>(i) << '\'' << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout.setf( std::ios::fixed, std:: ios::floatfield);
    std::cout << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(i) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void    Convert::float_conv()
{
    std::string float_lit(lit);

    float_lit.erase(float_lit.length()-1);
    std::stringstream lit_f(float_lit);
    float f = 0;
    lit_f >> f;
    if (lit_f.fail() || !lit_f.eof())
        return (this->other_conv());
    if (f > std::numeric_limits<char>::max() || f < std::numeric_limits<char>::min())
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(f))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << '\'' << static_cast<char>(f) << '\'' << std::endl;
    if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout.setf( std::ios::fixed, std:: ios::floatfield);
    std::cout << std::setprecision(find_precision(lit));
    std::cout << "float: " << f << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void    Convert::double_conv()
{
    double d = strtod(lit.c_str(), NULL);

    if (d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min())
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(d))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << '\'' << static_cast<char>(d) << '\'' << std::endl;
    if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout.setf( std::ios::fixed, std:: ios::floatfield);
    std::cout << std::setprecision(find_precision(lit));
    std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
    std::cout << "double: " << d << std::endl;
}

void    Convert::edge_conv()
{
    if (lit == "inf" || lit == "+inf" || lit == "-inf" || lit == "nan")
    {
        double d = strtod(lit.c_str(), NULL);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
        std::cout << "double: " << d << std::endl;
        return ;
    }
    else
    {
        std::string float_lit(lit);
        float_lit.erase(float_lit.length()-1);
        std::stringstream lit_f(float_lit);
        float f = 0;
        lit_f >> f;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << f << 'f' << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
}

void    Convert::other_conv()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void Convert::print_all()
{
    ct = find_conv();
    static void (Convert::*conv[6])()
    = {&Convert::char_conv, &Convert::int_conv, &Convert::float_conv, &Convert::double_conv, &Convert::edge_conv, &Convert::other_conv};
    (this->*conv[ct])(); 
}