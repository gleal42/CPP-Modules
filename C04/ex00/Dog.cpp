/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:56:05 by gleal             #+#    #+#             */
/*   Updated: 2022/04/17 23:52:41 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp" 

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	type = "Dog";
}

Dog &Dog::operator=(const Dog &dog)
{
	type = dog.type;
	return *this;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
	std::cout << "Ooff off Grrrr" << std::endl;
}