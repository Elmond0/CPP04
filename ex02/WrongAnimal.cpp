/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:46:49 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:46:50 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("")
{
	std::cout << "WrongAnimal default constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
	std::cout << "WrongAnimal copy constructed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "WrongAnimal assigned." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed." << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal generic sound..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return _type;
}
