/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:19:16 by gkrusta           #+#    #+#             */
/*   Updated: 2024/04/07 13:33:02 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <cstdint> // for uintptr_t
# include "Data.hpp"

class	Data;

class	Serializer {
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
	private:
		Serializer();
		~Serializer();
		Serializer&	operator=(Serializer& other);
		Serializer(Serializer& other);
};

#endif