/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/13 14:54:04 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	humanA("Pablo");
	ClapTrap	humanB("Enrique");

	humanA.attack("Enrique");
	humanB.takeDamage(5);
	humanB.beRepaired(2);
	humanB.attack("Pablo");
	humanA.takeDamage(5);
	humanA.takeDamage(6);
	humanA.takeDamage(3);
	return (0);
}
