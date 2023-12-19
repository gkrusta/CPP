/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:56:16 by gkrusta           #+#    #+#             */
/*   Updated: 2023/12/19 20:52:37 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	delete_oldest(contact contact)
{
	_firstName.clear();
	_lastName.clear();
	_nickname.clear();
	_number.clear();
	_secret.clear();
}

void	Contact::addContact(phoneBook& book)
{
	if (book.nr_contacts < 8)
	{
		
	}
	else
		delete_oldest(book._contact[0]);
}
