/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:56:05 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 23:17:20 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp" 

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog &Dog::operator=(const Dog &dog)
{
	type = dog.type;
	*brain = *(dog.brain);
	return *this;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog Copy Destructor" << std::endl;
	brain = new Brain;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Ooff off Grrrr" << std::endl;
}

void Dog::print_ideas() const
{
	int i;
	i = 0;
	while (!brain->get_idea(i).empty() && i < 100)
	{
		std::cout << "Idea number " << i+1 << " " << brain->get_idea(i) << std::endl;
		i++;
	}
}
void Dog::new_idea(std::string idea) const
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

void Dog::clear_ideas_from(int index) const
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
