/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:01:48 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/25 18:14:00 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
#include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, const int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&	operator=(const Bureaucrat& other);

		std::string const	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm& form);

		class	GradeTooHighException: public	std::exception
		{
			virtual const char* what() const throw()
			{
				return "Bureaucrat's Grade Too High";
			}
		};

		class	GradeTooLowException: public	std::exception
		{
			virtual const char* what() const throw()
			{
				return "Bureaucrat's Grade Too Low";
			}
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream& out, Bureaucrat& person);

#endif