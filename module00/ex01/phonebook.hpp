/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:56:20 by gkrusta           #+#    #+#             */
/*   Updated: 2023/12/19 20:44:24 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class	PhoneBook
{
	public:
		void	searchContact();
		void	addContact();
		void	displayAllContacts();
		void	
	private:
		contact _contact[8];
		int		nr_contacts;
};

#endif