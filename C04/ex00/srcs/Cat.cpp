/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:55:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 01:17:26 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp" 

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	type = "Cat";
}

Cat &Cat::operator=(const Cat &cat)
{
	type = cat.type;
	return *this;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat Copy Destructor" << std::endl;
	*this = cat;
}

void Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor" << std::endl;
}
