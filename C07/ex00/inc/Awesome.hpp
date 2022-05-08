/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 04:17:11 by gleal             #+#    #+#             */
/*   Updated: 2022/05/08 04:18:59 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome
{
    public:
        Awesome(void);
        Awesome( int n );
        Awesome & operator= (Awesome & a);
        bool operator==( Awesome const & rhs ) const;
        bool operator!=( Awesome const & rhs ) const;
        bool operator>( Awesome const & rhs ) const;
        bool operator<( Awesome const & rhs ) const;
        bool operator>=( Awesome const & rhs ) const;
        bool operator<=( Awesome const & rhs ) const;
        int get_n() const;
    private:
        int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a);

#endif
