/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:09:59 by gleal             #+#    #+#             */
/*   Updated: 2022/03/30 02:08:40 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	Contact cont[8];
	public:
	void	add_contact(PhoneBook &phbook, int i);
	void	search_contacts(PhoneBook phbook, int i);
};

#endif

