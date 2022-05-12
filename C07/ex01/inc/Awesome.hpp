/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:37:27 by gleal             #+#    #+#             */
/*   Updated: 2022/05/12 20:29:12 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome{
private:
        int _n;
public:
    Awesome();
    Awesome(const Awesome &awesome);
    ~Awesome();
    Awesome &operator=(const Awesome &awesome);
        int get( void ) const;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs );

#endif

