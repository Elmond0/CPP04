/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:45:28 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:45:29 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "=== Subject test ===" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << "j type: " << j->getType() << std::endl;
	std::cout << "i type: " << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl
			  << "=== Cleanup ===" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl
			  << "=== Wrong hierarchy (no virtual) ===" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << std::endl;
	std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();

	std::cout << std::endl
			  << "=== Cleanup ===" << std::endl;
	delete wrongMeta;
	delete wrongCat;

	std::cout << std::endl
			  << "=== Stack objects ===" << std::endl;
	Dog rex;
	Cat micia;

	std::cout << std::endl;
	std::cout << "rex type: " << rex.getType() << std::endl;
	rex.makeSound();
	std::cout << "micia type: " << micia.getType() << std::endl;
	micia.makeSound();

	std::cout << std::endl
			  << "=== Copy ===" << std::endl;
	Dog rexCopy(rex);
	std::cout << "rexCopy type: " << rexCopy.getType() << std::endl;
	rexCopy.makeSound();

	std::cout << std::endl
			  << "=== Destruction ===" << std::endl;
	return 0;
}
