/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:45:57 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:45:58 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy constructed." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << "Cat assigned." << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructed." << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return _brain;
}
