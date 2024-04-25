/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:20:47 by mgagne            #+#    #+#             */
/*   Updated: 2024/03/19 16:38:12 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <cstdlib>

int main()
{
	Data	DataStruct;

	srand(time(0));
	DataStruct.id = rand();
	DataStruct.name = "STRUCT";

	std::cout << "name: " << DataStruct.name << "	id: " << DataStruct.id << std::endl;
	uintptr_t raw = Serializer::serialize(&DataStruct);
	std::cout << raw << std::endl;
	Data	*NewStruct = Serializer::deserialize(raw);
	std::cout << "name: " << NewStruct->name << "	id: " << NewStruct->id << std::endl;
}
