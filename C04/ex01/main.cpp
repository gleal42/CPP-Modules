/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:52:00 by gleal             #+#    #+#             */
/*   Updated: 2022/04/18 23:32:02 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void test_dogs(const Animal** &animal_list)
{
	std::cout << std::endl;
	std::cout << "First Dog set ideas okay and baby" << std::endl;
	dynamic_cast<const Dog *>(animal_list[0])->new_idea("okay");
	dynamic_cast<const Dog *>(animal_list[0])->print_ideas();
	dynamic_cast<const Dog *>(animal_list[0])->new_idea("baby");
	dynamic_cast<const Dog *>(animal_list[0])->print_ideas();
	std::cout << std::endl;
	std::cout << "Create new Dog based on Dog 1" << std::endl;
	const Dog temp(*dynamic_cast<const Dog *>(animal_list[0]));
	std::cout << "Print Dog 1" << std::endl;
	dynamic_cast<const Dog *>(animal_list[0])->print_ideas();
	std::cout << "Print New Dog" << std::endl;
	temp.print_ideas();
	std::cout << std::endl;
	std::cout << "New Dog set idea maybe I like cats" << std::endl;
	temp.new_idea("maybe I like cats");
	std::cout << std::endl;
	std::cout << "And now we check if both Dogs were affected" << std::endl;
	std::cout << "Print New Dog again" << std::endl;
	temp.print_ideas();
	std::cout << "Print Dog 1" << std::endl;
	dynamic_cast<const Dog *>(animal_list[0])->print_ideas();
	std::cout << "New Dog new idea maybe I can fly" << std::endl;
	dynamic_cast<const Dog *>(animal_list[0])->new_idea("maybe I can fly");
	std::cout << "Print New Dog again" << std::endl;
	temp.print_ideas();
	std::cout << "Print Dog 1" << std::endl;
	dynamic_cast<const Dog *>(animal_list[0])->print_ideas();
	std::cout << "Clear the last 2 new Dog ideas" << std::endl;
	temp.clear_ideas_from(1);
	temp.print_ideas();
	std::cout << "Clear the last Dog 1 idea" << std::endl;
	dynamic_cast<const Dog *>(animal_list[0])->clear_ideas_from(2);
	dynamic_cast<const Dog *>(animal_list[0])->print_ideas();
	std::cout << std::endl;
}

void test_cats(const Animal** &animal_list)
{
	std::cout << std::endl;
	std::cout << "First Cat set ideas cheese and mouse" << std::endl;
	dynamic_cast<const Cat *>(animal_list[2])->new_idea("cheese");
	dynamic_cast<const Cat *>(animal_list[2])->print_ideas();
	dynamic_cast<const Cat *>(animal_list[2])->new_idea("mouse");
	dynamic_cast<const Cat *>(animal_list[2])->print_ideas();
	std::cout << std::endl;
	std::cout << "Create new Cat based on Cat 1" << std::endl;
	const Cat temp(*dynamic_cast<const Cat *>(animal_list[2]));
	std::cout << "Print Cat 1" << std::endl;
	dynamic_cast<const Cat *>(animal_list[2])->print_ideas();
	std::cout << "Print New Cat" << std::endl;
	temp.print_ideas();
	std::cout << std::endl;
	std::cout << "New Cat set idea Tom and Jerry was a cool show" << std::endl;
	temp.new_idea("Tom and Jerry was a cool show");
	std::cout << std::endl;
	std::cout << "And now we check if both Cats were affected" << std::endl;
	std::cout << "Print New Cat again" << std::endl;
	temp.print_ideas();
	std::cout << "Print Cat 1" << std::endl;
	dynamic_cast<const Cat *>(animal_list[2])->print_ideas();
	std::cout << "New Cat new idea are rats getting too big?" << std::endl;
	dynamic_cast<const Cat *>(animal_list[2])->new_idea("are rats getting too big?");
	std::cout << "Print New Cat again" << std::endl;
	temp.print_ideas();
	std::cout << "Print Cat 1" << std::endl;
	dynamic_cast<const Cat *>(animal_list[2])->print_ideas();


	std::cout << "Clear the last 2 new Cat ideas" << std::endl;
	temp.clear_ideas_from(1);
	temp.print_ideas();
	std::cout << "Clear the last Cat idea" << std::endl;
	dynamic_cast<const Cat *>(animal_list[2])->clear_ideas_from(2);
	dynamic_cast<const Cat *>(animal_list[2])->print_ideas();
	std::cout << std::endl;
}

int main()
{
	// Example from PDF
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	// Extra tests
	const Animal** animal_list = new const Animal*[4];
	for (size_t k = 0; k < 4; k++) {
		std::cout << std::endl;
		if (k < 2) {
			animal_list[k] = new Dog();
		} else {
			animal_list[k] = new Cat();
		}
	}
	test_dogs(animal_list);
	test_cats(animal_list);
	for(size_t k = 0; k < 4; k++) {
		delete animal_list[k];
	}
	delete [] animal_list;
	return (0);
}