/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:52:00 by gleal             #+#    #+#             */
/*   Updated: 2022/04/26 16:36:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void test_dogs(Animal** &animal_list)
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

void test_cats(Animal** &animal_list)
{
	std::cout << std::endl;
	std::cout << "First Cat set ideas cheese and mouse" << std::endl;
	dynamic_cast<const Cat *>(animal_list[1])->new_idea("cheese");
	dynamic_cast<const Cat *>(animal_list[1])->print_ideas();
	dynamic_cast<const Cat *>(animal_list[1])->new_idea("mouse");
	dynamic_cast<const Cat *>(animal_list[1])->print_ideas();
	std::cout << std::endl;
	std::cout << "Create new Cat based on Cat 1" << std::endl;
	const Cat temp(*dynamic_cast<const Cat *>(animal_list[1]));
	std::cout << "Print Cat 1" << std::endl;
	dynamic_cast<const Cat *>(animal_list[1])->print_ideas();
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
	dynamic_cast<const Cat *>(animal_list[1])->print_ideas();
	std::cout << "New Cat new idea are rats getting too big?" << std::endl;
	dynamic_cast<const Cat *>(animal_list[1])->new_idea("are rats getting too big?");
	std::cout << "Print New Cat again" << std::endl;
	temp.print_ideas();
	std::cout << "Print Cat 1" << std::endl;
	dynamic_cast<const Cat *>(animal_list[1])->print_ideas();

	std::cout << "Clear the last 2 new Cat ideas" << std::endl;
	temp.clear_ideas_from(1);
	temp.print_ideas();
	std::cout << "Clear the last Cat idea" << std::endl;
	dynamic_cast<const Cat *>(animal_list[1])->clear_ideas_from(2);
	dynamic_cast<const Cat *>(animal_list[1])->print_ideas();
	std::cout << std::endl;
}

void	test_deep_copy_pdf_dogs()
{
	std::cout << std::endl;
	std::cout << "Testing how the different assignments and copies are deep for DOGS" << std::endl;
	Dog basic;
	std::cout << "basic" << std::endl;
	basic.new_idea("BAAAAAAAAAAALS");
	basic.print_ideas();
	{
		Dog tmp = basic;
		std::cout << "Temp" << std::endl;
		tmp.print_ideas();
		tmp.new_idea("I will suicide in a minute");
		tmp.print_ideas();
		std::cout << "Temp2" << std::endl;
		Dog tmp2(basic);
		tmp2.print_ideas();
		Dog tmp3;
		std::cout << "Temp3 before" << std::endl;
		tmp3.print_ideas();
		tmp3 = tmp;
		std::cout << "Temp3 after" << std::endl;
		tmp3.print_ideas();
	}
	std::cout << "basic" << std::endl;
	basic.print_ideas();
}

void	test_deep_copy_pdf_cats()
{
	std::cout << std::endl;
	std::cout << "Testing how the different assignments and copies are deep for CATS" << std::endl;
	Cat basic;
	std::cout << "basic" << std::endl;
	basic.new_idea("MIIIIIICE");
	basic.print_ideas();
	{
		Cat tmp = basic;
		std::cout << "Temp" << std::endl;
		tmp.print_ideas();
		tmp.new_idea("I will suicide in a minute");
		tmp.print_ideas();
		std::cout << "Temp2" << std::endl;
		Cat tmp2(basic);
		tmp2.print_ideas();
		Cat tmp3;
		std::cout << "Temp3 before" << std::endl;
		tmp3.print_ideas();
		tmp3 = tmp;
		std::cout << "Temp3 after" << std::endl;
		tmp3.print_ideas();
	}
	std::cout << "basic" << std::endl;
	basic.print_ideas();
}

void	test_complex_assignments(Animal** &animal_list)
{
	std::cout << std::endl;
	std::cout << "Testing how the assignment works in different situations" << std::endl;
	Animal* snoopy1 = animal_list[2];
	Animal* snoopy2 = animal_list[4];
	Animal* puss_in_boots1 = animal_list[3];
	Animal* puss_in_boots2 = animal_list[5];

	std::cout << "DOGS" << std::endl;
	dynamic_cast<const Dog *>(snoopy1)->new_idea("I like to shit on the grass");
		std::cout << "Snoopy1" << std::endl;
	dynamic_cast<const Dog *>(snoopy1)->print_ideas();
		std::cout << "Snoopy2 before assignment" << std::endl;
	dynamic_cast<const Dog *>(snoopy2)->print_ideas();
	*snoopy2 = *snoopy1;
		std::cout << "Snoopy2 after assignment" << std::endl;
	dynamic_cast<const Dog *>(snoopy2)->print_ideas();
		std::cout << "Snoopy1 after assignment" << std::endl;
	dynamic_cast<const Dog *>(snoopy1)->print_ideas();

	std::cout << "CATS" << std::endl;

	dynamic_cast<const Cat *>(puss_in_boots1)->new_idea("I like to shit in the sandbox");
		std::cout << "Puss in Boots 1" << std::endl;
	dynamic_cast<const Cat *>(puss_in_boots1)->print_ideas();
		std::cout << "Puss in Boots 2 before assignment" << std::endl;
	dynamic_cast<const Cat *>(puss_in_boots2)->print_ideas();
	*puss_in_boots2 = *puss_in_boots1;
		std::cout << "Puss in Boots 2 after assignment" << std::endl;
	dynamic_cast<const Cat *>(puss_in_boots2)->print_ideas();
		std::cout << "Puss in Boots 1 after assignment" << std::endl;
	dynamic_cast<const Cat *>(puss_in_boots1)->print_ideas();

	std::cout << "Mixed not possible" << std::endl;
	*snoopy2 = *puss_in_boots2;
	*puss_in_boots1 = *snoopy1;
}

int main()
{
	// Example from PDF
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	// Extra tests
	Animal** animal_list = new Animal*[6];
	for (size_t k = 0; k < 6; k++) {
		std::cout << std::endl;
		if ((k % 2) == 0) {
			animal_list[k] = new Dog();
		} else {
			animal_list[k] = new Cat();
		}
	}
	test_dogs(animal_list);
	test_cats(animal_list);
	test_deep_copy_pdf_dogs();
	test_deep_copy_pdf_cats();
	test_complex_assignments(animal_list);
	for(size_t k = 0; k < 6; k++) {
		delete animal_list[k];
	}
	delete [] animal_list;
	return (0);
}