/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:12:49 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 00:18:42 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp" 

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	type = cat.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &cat)
{
	*this = cat;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Miau" << std::endl;
}

WrongCat::~WrongCat()
{
}
