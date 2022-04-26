/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:52:39 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 02:11:47 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
private:
	Brain* brain;
public:
	Cat();
	Animal &operator=(const Animal &animal);
	Cat &operator=(const Cat &cat);
	Cat(const Cat &cat);
	virtual ~Cat();
	void makeSound() const;
	void print_ideas() const;
	void new_idea(std::string idea) const;
	void clear_ideas_from(int index) const;
};

#endif
