/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:41:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 00:12:01 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp" 

Animal::Animal()
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	type = animal.type;
	return *this;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Copy Destructor" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
}
