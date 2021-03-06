/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:55:30 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 02:13:16 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp" 

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Animal &Cat::operator=(const Animal &animal)
{
	if (type == animal.getType())
	{
		std::cout << "Cat with Animal Pointer Copy Constructor" << std::endl;
		*brain = *(dynamic_cast<const Cat &>(animal).brain);
	} else {
		std::cout << "Cannot convert an animal to another" << std::endl;	
	}
	return *this;
}

Cat &Cat::operator=(const Cat &cat)
{
	type = cat.type;
	*brain = *(cat.brain);
	return *this;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat Copy Destructor" << std::endl;
	brain = new Brain;
	*this = cat;
}

void Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor" << std::endl;
	delete brain;
}

void Cat::print_ideas() const
{
	int i;
	i = 0;
	while (!brain->get_idea(i).empty() && i < 100)
	{
		std::cout << "Idea number " << i+1 << " " << brain->get_idea(i) << std::endl;
		i++;
	}
}
void Cat::new_idea(std::string idea) const
{
	int i;

	i = 0;
	while (!brain->get_idea(i).empty() && i < 100) {
		i++;
	}
	if (i < 100) {
		brain->set_idea(idea, i);
	}
}

void Cat::clear_ideas_from(int index) const
{
	if (index < 100) {
		brain->clear_idea(index);
	}
	int i = index + 1;
	while (!brain->get_idea(i).empty() && i < 100) {
		brain->clear_idea(i);
		i++;
	}
}