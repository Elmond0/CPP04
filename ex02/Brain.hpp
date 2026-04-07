/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:46:33 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:46:34 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();

	const std::string &getIdea(int index) const;
	void setIdea(int index, const std::string &idea);
};

#endif
