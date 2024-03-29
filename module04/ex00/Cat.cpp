/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:35 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 16:19:01 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat default constructor called" <<  std::endl;
}

Cat:: Cat(std::string customType) : Animal(customType.empty() ? "Cat" : customType) {
	std::cout << "Cat -set type- constructor called" <<  std::endl;
}

Cat::Cat(const Cat& other) {
	_type = other._type;
	std::cout << "Cat copy constructor called" <<  std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Miau..." << std::endl;
}
