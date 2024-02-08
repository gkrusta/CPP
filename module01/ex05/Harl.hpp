/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:18:57 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/06 12:53:05 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl {
	public:
		void	complain(std::string level);
		Harl();
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::string	messages[4];
};

typedef	void (Harl::*f_arr)();

#endif