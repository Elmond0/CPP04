/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:46:00 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:46:01 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat(void);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void makeSound(void) const;
	Brain *getBrain(void) const;
};

#endif
