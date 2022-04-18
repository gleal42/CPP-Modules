/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:52:39 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 23:15:43 by gleal            ###   ########.fr       */
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
	Cat &operator=(const Cat &cat);
	Cat(const Cat &cat);
	~Cat();
	void makeSound() const;
	void print_ideas() const;
	void new_idea(std::string idea) const;
	void clear_ideas_from(int index) const;
};

#endif
