/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:24:18 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 22:57:29 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp" 

Brain::Brain()
{
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (size_t i = 0; i < 100; i++) {
		ideas[i] = brain.ideas[i];
	}
	return *this;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor" << std::endl;
}

void Brain::set_idea(std::string str, int index)
{
	ideas[index] = str;
}

std::string Brain::get_idea(int index)
{
	return ideas[index];
}

void Brain::clear_idea(int index)
{
	ideas[index].clear();
}