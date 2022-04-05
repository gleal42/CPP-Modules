/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:09:59 by gleal             #+#    #+#             */
/*   Updated: 2022/04/05 20:53:44 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact cont[8];
		void    ask_for_input(int nbr);
	public:
		void	add_contact(PhoneBook &phbook, int i);
		void	search_contacts(PhoneBook phbook);
};

#endif
