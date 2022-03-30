/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:11:52 by gleal             #+#    #+#             */
/*   Updated: 2022/03/30 23:40:09 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string> 

enum info{
    FSTNAME,
    LASTNAME,
    NICKNAME,
    PHONENUMBER,
    DARKSECRET,
};

class Contact {
    private:
        std::string fst_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;
    public:
        void    add_text_to(int nbr);
        void    ask_for_input(int nbr);
        bool    is_empty(void);
        void    print_cont(void);
};

#endif

