/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:46:47 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:46:48 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// Animal a;  // WON'T COMPILE: Animal is abstract

	std::cout << "=== Array of Animals ===" << std::endl;
	const int size = 10;
	Animal *animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl
			  << "=== Sounds ===" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}

	std::cout << std::endl
			  << "=== Delete all ===" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << std::endl
			  << "=== Deep copy test (Dog) ===" << std::endl;
	Dog original;
	original.getBrain()->setIdea(0, "Chase the ball");
	original.getBrain()->setIdea(1, "Eat food");

	Dog copy(original);

	std::cout << std::endl;
	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	copy.getBrain()->setIdea(0, "Sleep all day");

	std::cout << std::endl
			  << "After modifying copy:" << std::endl;
	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl
			  << "=== Deep copy test (Cat assignment) ===" << std::endl;
	Cat cat1;
	cat1.getBrain()->setIdea(0, "Catch mouse");
	Cat cat2;
	cat2 = cat1;

	cat2.getBrain()->setIdea(0, "Nap on couch");

	std::cout << std::endl;
	std::cout << "Cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl
			  << "=== Destruction ===" << std::endl;
	return 0;
}
