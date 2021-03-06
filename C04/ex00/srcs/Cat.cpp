/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:55:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/25 22:41:49 by gleal            ###   ########.fr       */
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

Cat::~Cat()
{
	std::cout << "Cat Default Destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}