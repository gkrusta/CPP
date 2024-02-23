/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:03:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/22 15:07:38 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	std::cout << "=== INCREMENT & DECREMENT POSSIBLE ===" << std::endl;
	Bureaucrat	personA("Pablo", 150);
	personA.incrementGrade(149);
	std::cout << personA;
	personA.decrementGrade(1);
	std::cout << personA;

	std::cout << "\n=== INCREMENT & DECREMENT NOT POSSIBLE ===" << std::endl;
	Bureaucrat	personB("Davyd", 1);
	personB.incrementGrade(1);
	std::cout << personB;
	personA.decrementGrade(149);
	std::cout << personA;

	std::cout << "\n=== ASIGNMENT OVERLOAD ===" << std::endl;
	personB = personA;
	std::cout << personB;

	return (0);
}