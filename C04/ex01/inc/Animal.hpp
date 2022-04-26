/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:42:00 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 01:56:58 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
protected:
	std::string type;
public:
	Animal();
	virtual Animal &operator=(const Animal &animal);
	Animal(const Animal &animal);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
};

#endif
