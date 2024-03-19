/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:59:13 by mgagne            #+#    #+#             */
/*   Updated: 2024/03/19 16:00:50 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{}

ScalarConverter::~ScalarConverter(void)
{}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{ *this = copy; }

ScalarConverter const    &ScalarConverter::operator=(ScalarConverter const &copy)
{
	(void)copy;
	return (*this);
}

void	ScalarConverter::convert(std::string literal)
{
	try
	{ print_char(literal); }
	catch (std::exception& e)
	{ std::cout << e.what() << std::endl; }

	try
	{ print_int(literal); }
	catch (std::exception& e)
	{ std::cout << e.what() << std::endl; }

	try
	{ print_float(literal);	}
	catch (std::exception& e)
	{ std::cout << e.what() << std::endl; }

	try
	{ print_double(literal); }
	catch (std::exception& e)
	{ std::cout << e.what() << std::endl; }

}

void	ScalarConverter::print_char(std::string literal)
{
	long long i;

	std::cout << "char:	";
	if (literal.size() == 1 && !std::isdigit(literal.at(0)))
	{
		if (literal.at(0) < 32 || literal.at(0) > 126)
			throw NonDisplayableException();
		std::cout << "'" << literal.at(0) << "'" << std::endl;
		return ;
	}
	i = strtoll(literal.c_str(), 0, 10);
	if ((i == 0 && literal.at(0) != '0') || i < 0 || errno == ERANGE || i >= INT_MAX || i <= INT_MIN)
		throw ImpossibleException();
	if (i < 32 || i > 126)
		throw NonDisplayableException();
	std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	return ;
}
void	ScalarConverter::print_int(std::string literal)
{
	long long i;

	std::cout << "int:	";
	if (literal.size() == 1 && !std::isdigit(literal.at(0)))
	{
		std::cout << static_cast<int>(literal.at(0)) << std::endl;
		return ;
	}
	i = strtoll(literal.c_str(), 0, 10);
	if ((i == 0 && literal.at(0) != '0') || i < 0 || errno == ERANGE || i >= INT_MAX || i <= INT_MIN)
		throw ImpossibleException();
	std::cout << i << std::endl;
}

void	ScalarConverter::print_float(std::string literal)
{
	float	f;

	std::cout << "float:	";
	if (literal.size() == 1 && !std::isdigit(literal.at(0)))
	{
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(literal.at(0)) << "f" << std::endl;
		return ;
	}
	f = std::strtof(literal.c_str(), 0);
	if ((f == 0 && literal.at(0) != '0') || errno == ERANGE )
		throw ImpossibleException();
	std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}
void	ScalarConverter::print_double(std::string literal)
{
	double d;

	std::cout << "double:	";
	if (literal.size() == 1 && !std::isdigit(literal.at(0)))
	{
		std::cout << static_cast<double>(literal.at(0)) << std::endl;
		return ;
	}
	d = std::strtod(literal.c_str(), 0);
	if ((d == 0 && literal.at(0) != '0') || errno == ERANGE )
		throw ImpossibleException();
	std::cout << d << std::endl;
}
