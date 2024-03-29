/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:30:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 16:19:38 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog default constructor called" <<  std::endl;
}

Dog::Dog(std::string customType) : Animal(customType.empty() ? "Dog" : customType) {
	std::cout << "Dog -set type- constructor called" <<  std::endl;
}

Dog::Dog(const Dog& other) {
	_type = other._type;
	std::cout << "Dog copy constructor called" <<  std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Vau vau..." << std::endl;
}