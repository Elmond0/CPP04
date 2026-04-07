/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:46:31 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:46:32 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructed." << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	std::cout << "Brain copy constructed." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain assigned." << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructed." << std::endl;
}

const std::string &Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		static const std::string empty;
		return empty;
	}
	return _ideas[index];
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}
