/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:45:22 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:45:23 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructed." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Dog assigned." << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructed." << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}
