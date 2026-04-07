/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:45:11 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:45:12 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("")
{
	std::cout << "Animal default constructed." << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy constructed." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Animal assigned." << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructed." << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "* ... *" << std::endl;
}

std::string Animal::getType(void) const
{
	return _type;
}
