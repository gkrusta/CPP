/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:45:57 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/08 17:24:53 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	_rawBits = 0;
	std::cout << "Default constructor called" <<  std::endl;
}

Fixed::Fixed(const int nb) {
	_rawBits = nb << _fractionalBits;
	std::cout << "Int constructor called" <<  std::endl;
}

Fixed::Fixed(float nb) {
	_rawBits = std::roundf(nb * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	this->_rawBits = other._rawBits;
	std::cout << "Copy constructor called" <<  std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->_rawBits = other._rawBits;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw) {
	_rawBits = raw;
	std::cout << "getRawBits member function called" << std::endl;
}

int	Fixed::toInt(void) const {
	return (this->_rawBits >> _fractionalBits);
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(this->_rawBits) / (1 << _fractionalBits));
}

std::ostream	&operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed& other) const {
	return (this->_rawBits > other._rawBits);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->_rawBits < other._rawBits);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return !(this->_rawBits > other._rawBits);
}

bool	Fixed::operator>=(const Fixed& other) const {
	return !(this->_rawBits < other._rawBits);
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->_rawBits == other._rawBits);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->_rawBits != other._rawBits);
}

Fixed	Fixed::operator+(const Fixed& other) const {
	
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed& other) const {
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed& other) const {
	return (this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++() {
	++this->_rawBits;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	++this->_rawBits;
	return (tmp);
}

Fixed&	Fixed::operator--() {
	--this->_rawBits;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	--this->_rawBits;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}
