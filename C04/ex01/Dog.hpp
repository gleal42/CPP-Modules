/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:55:50 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 23:13:38 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain* brain;
public:
	Dog();
	Dog &operator=(const Dog &dog);
	Dog(const Dog &dog);
	~Dog();
	void makeSound() const;
	void print_ideas() const;
	void new_idea(std::string idea) const;
	void clear_ideas_from(int index) const;
};

#endif
