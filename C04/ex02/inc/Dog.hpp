/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:55:50 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 02:03:15 by gleal            ###   ########.fr       */
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
	Animal &operator=(const Animal &animal);
	Dog &operator=(const Dog &dog);
	Dog(const Dog &dog);
	virtual ~Dog();
	void makeSound() const;
	void print_ideas() const;
	void new_idea(std::string idea) const;
	void clear_ideas_from(int index) const;
};

#endif
