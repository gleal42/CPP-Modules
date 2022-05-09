/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:37:27 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 18:42:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome
{
    public:
        Awesome( void );
        int get( void ) const;
    private:
        int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs );



#endif

