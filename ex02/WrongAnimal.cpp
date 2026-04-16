#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal default constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
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
	return type;
}
