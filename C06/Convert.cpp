/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:52:34 by gleal             #+#    #+#             */
/*   Updated: 2022/05/05 02:28:33 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp" 

Convert::Convert()
{
    db = 0;
    std::cout << "Convert Default Constructor" << std::endl;
}

Convert::Convert(std::string literal)
{
    db = std::strtod(literal.c_str(), NULL);
    try
    {
        char_conv(literal);
    }
    catch(std::exception &e)
    {
        char_rep = e.what();
    }
    if (errno == ERANGE){
        std::cout << "range error" << std::endl;
    }
    std::cout << "We will convert " << literal << std::endl;
}

Convert::Convert(const Convert &convert)
{
    std::cout << "Convert Copy Constructor" << std::endl;
    *this = convert;
}

Convert::~Convert()
{
    std::cout << "Convert Default Destructor" << std::endl;
}

Convert &Convert::operator=(const Convert &convert)
{
    (void)convert;
    return *this;
}

const char* Convert::ImpossibleException::what() const throw()
{
    return("impossible");
}

const char* Convert::NonDisplayableException::what() const throw()
{
    return("Non displayable");
}

void    Convert::char_conv(std::string &lit)
{
    if (lit.length() == 1 && (lit.find_first_of("0123456789") == std::string::npos))
        char_rep = lit;
    else if (lit.find_first_not_of("+-0123456789") != std::string::npos)
        throw ImpossibleException();
    else if (*lit.c_str() != '0' && db == 0)
        throw ImpossibleException();
    else if (db > CHAR_MAX || db < CHAR_MIN)
        throw ImpossibleException();
    else if (!isprint(db))
        throw NonDisplayableException();
}

void Convert::print_char()
{
    std::cout << char_rep << std::endl;
}