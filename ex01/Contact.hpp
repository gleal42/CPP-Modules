/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:11:52 by gleal             #+#    #+#             */
/*   Updated: 2022/04/01 18:51:19 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <ios>
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
        void    print_collumn(std::string str);
        void	print_template(const std::string &fst, const std::string &sec,const  std::string &thrd, const std::string &lst);
        void	print_vals_temp(std::string index);
        void	print_all_vals(void);
};

#endif

