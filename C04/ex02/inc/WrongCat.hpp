/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:12:51 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 00:43:59 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
	
public:
	WrongCat();
	WrongCat &operator=(const WrongCat &wrongcat);
	WrongCat(const WrongCat &wrongcat);
	~WrongCat();
	void makeSound() const;
};

#endif
