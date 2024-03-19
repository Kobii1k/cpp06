/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:58:49 by mgagne            #+#    #+#             */
/*   Updated: 2024/03/18 16:26:28 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP

	#include "main.h"

	class ScalarConverter
	{
		private:
		public:
			ScalarConverter(void);
			~ScalarConverter(void);
			ScalarConverter(ScalarConverter const &copy);
			ScalarConverter const	&operator=(ScalarConverter const &copy);

			static void		convert(std::string literal);

			static void		print_char(std::string literal);
			static void		print_int(std::string literal);
			static void		print_float(std::string literal);
			static void		print_double(std::string literal);

		class	ImpossibleException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{ return ("Impossible"); }
		};

		class	NonDisplayableException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{ return ("Non Displayable"); }
		};
	};

#endif
