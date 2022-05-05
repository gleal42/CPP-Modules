/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:51:57 by gleal             #+#    #+#             */
/*   Updated: 2022/05/05 01:45:09 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>

void    convert(char *literal)
{
    Convert a(literal);
    a.print_char();
}

int main(int argc, char **argv)
{
   if (argc == 2)
       convert(argv[1]);
}