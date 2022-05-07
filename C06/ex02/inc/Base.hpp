/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:04:02 by gleal             #+#    #+#             */
/*   Updated: 2022/05/07 02:11:45 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <exception>

class Base {
    public:    
        virtual ~Base(); 
};

void identify(Base* p);
void identify(Base& p);
Base * generate(void);

#endif
