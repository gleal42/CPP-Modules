/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:06:16 by gleal             #+#    #+#             */
/*   Updated: 2022/04/25 23:53:27 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp" 

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	if (getType() == wronganimal.getType()) {
		std::cout << "Wrong Animal Copy Constructor" << std::endl;
		type = wronganimal.type;
	}
	else {
		std::cout << "Cannot convert a Wrong Animal to another" << std::endl;
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal Copy Destructor" << std::endl;
	*this = wronganimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal noise" << std::endl;
}
