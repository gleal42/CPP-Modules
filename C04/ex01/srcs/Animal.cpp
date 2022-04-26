/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:41:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 02:22:44 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp" 

Animal::Animal()
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
if (getType() == animal.getType()) {
		std::cout << "Animal Copy Constructor" << std::endl;
		type = animal.getType();
	}
	else {
		std::cout << "Cannot convert an animal to another" << std::endl;
	}
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
	std::cout << "General Animal Sound" << std::endl;
}
