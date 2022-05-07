/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:59:14 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 02:24:51 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *rand = generate();
    identify(rand);
    delete rand;
    Base bs;
    identify(&bs);

    A a;
    identify(a);
    B b;
    identify(b);
    C c;
    identify(c);
    Base d;
    identify(d);
}
