/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:24:55 by mgagne            #+#    #+#             */
/*   Updated: 2024/07/30 17:24:45 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(void)
{}

Base::~Base(void)
{}

Base *Base::generate(void)
{
	std::srand(time(NULL));
	switch(std::rand() % 3)
	{
		case 0 :
			return (new A());
		case 1 :
			return (new B());
		case 2 :
			return (new C());
		default :
			std::cout << "instantiation error" << std::endl;
	}
	return (NULL);
}

void Base::identify(Base &p)
{
	try
	{
		A	&base_type = dynamic_cast<A &>(p);
		std::cout<< "A	: " << &base_type << std::endl;
	}
	catch (std::exception &error_badcast)
	{}

	try
	{
		B	&base_type = dynamic_cast<B &>(p);
		std::cout<< "B	: " << &base_type << std::endl;
	}
	catch (std::exception &error_badcast)
	{}

	try
	{
		C	&base_type = dynamic_cast<C &>(p);
		std::cout<< "C	: " << &base_type << std::endl;
	}
	catch (std::exception &error_badcast)
	{}
}

void Base::identify(Base *p)
{
	A	*base_typeA = dynamic_cast<A *>(p);
	if (base_typeA)
		std::cout << "A	: " << base_typeA << std::endl;

	B	*base_typeB = dynamic_cast<B *>(p);
	if (base_typeB)
		std::cout << "B	: " << base_typeB << std::endl;

	C	*base_typeC = dynamic_cast<C *>(p);
	if (base_typeC)
		std::cout << "C	: " << base_typeC << std::endl;
}
