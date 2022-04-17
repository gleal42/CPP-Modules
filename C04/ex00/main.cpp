/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:52:00 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 00:28:47 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

 	//Tests without adding virtual (makeSound won't be redefined)
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	wrongmeta->makeSound();
	wrongcat->makeSound();

	delete meta;
	delete j;
	delete i;

	return 0;
}