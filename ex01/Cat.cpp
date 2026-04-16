#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copy constructed." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "Cat assigned." << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructed." << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return brain;
}
