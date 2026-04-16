#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "=== Subject test ===" << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	delete j;
	delete i;

	std::cout << std::endl
			  << "=== Array of Animals ===" << std::endl;
	const int size = 10;
	Animal *animals[size];

	for (int k = 0; k < size; k++)
	{
		if (k < size / 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}

	std::cout << std::endl
			  << "=== Sounds ===" << std::endl;
	for (int k = 0; k < size; k++)
		animals[k]->makeSound();

	std::cout << std::endl
			  << "=== Delete all ===" << std::endl;
	for (int k = 0; k < size; k++)
		delete animals[k];

	std::cout << std::endl
			  << "=== Deep copy test ===" << std::endl;
	Dog original;
	original.getBrain()->setIdea(0, "Chase the ball");
	original.getBrain()->setIdea(1, "Eat food");
	original.getBrain()->setIdea(99, "Eat foodsss");
	original.getBrain()->setIdea(101, "foodsss");

	Dog copy(original);

	std::cout << std::endl;
	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Original idea[99]: " << original.getBrain()->getIdea(99) << std::endl;
	std::cout << "Original idea[101]: " << original.getBrain()->getIdea(101) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	copy.getBrain()->setIdea(0, "Sleep all day");

	std::cout << std::endl
			  << "After modifying copy:" << std::endl;
	std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl
			  << "=== Deep copy via assignment ===" << std::endl;
	Cat cat1;
	cat1.getBrain()->setIdea(0, "Catch mouse");
	Cat cat2;
	cat2 = cat1;

	std::cout << std::endl;
	std::cout << "Cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

	cat2.getBrain()->setIdea(0, "Nap on couch");

	std::cout << std::endl
			  << "After modifying cat2:" << std::endl;
	std::cout << "Cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl
			  << "=== Destruction ===" << std::endl;
	return 0;
}
