/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:17:19 by gleal             #+#    #+#             */
/*   Updated: 2022/04/08 19:51:00 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string strvar;
    std::string *stringPTR = &strvar;
    std::string &stringREF = strvar;

    strvar = "HI THIS IS BRAIN";
    std::cout << &strvar << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << strvar << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}