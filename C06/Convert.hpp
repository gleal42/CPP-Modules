/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:53:17 by gleal             #+#    #+#             */
/*   Updated: 2022/05/04 20:59:38 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class Convert{
private:
    
public:
    Convert();
    Convert(const Convert &convert);
    ~Convert();
    Convert &operator=(const Convert &convert);
    void    print_conversions();
};

#endif
