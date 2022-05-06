/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:51:57 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 00:05:54 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>

void    convert(char *literal)
{
    Convert a(literal);
    Convert b("1000");
    a.print_all();
    b.print_all();

    a = b;
    a.print_all();
}

int main(int argc, char **argv)
{
   if (argc == 2)
       convert(argv[1]);
}