/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:46:41 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/18 13:00:40 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copy constructed." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "Dog assigned." << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructed." << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return brain;
}
