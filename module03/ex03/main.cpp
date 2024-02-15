/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:40:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/15 13:30:37 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << "\n===== Testing DiamondTrap =====" << std::endl;
	DiamondTrap		humanA("Pablo");
	DiamondTrap		humanB;
	DiamondTrap		humanC(humanA);
	humanA.attack("Enrique", "DiamondTrap");
	humanB.takeDamage(1, "DiamondTrap");
	humanB.beRepaired(5, "DiamondTrap");
	humanA.whoAmI();
	humanB.whoAmI();
	humanC.whoAmI();
	return (0);
}
