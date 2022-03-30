/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:11:52 by gleal             #+#    #+#             */
/*   Updated: 2022/03/30 02:23:52 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string> 

class Contact {
    std::string fst_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string dark_secret;
    public:
    void    add_fst_name(std::string str, std::string &ptr);
    void    add_last_name(std::string str, std::string &ptr);
    void    add_nickname(std::string str, std::string &ptr);
    void    add_phone_number(std::string str, std::string &ptr);
    void    add_dark_secret(std::string str, std::string &ptr);
};

#endif

