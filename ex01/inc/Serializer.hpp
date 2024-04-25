/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:23:40 by mgagne            #+#    #+#             */
/*   Updated: 2024/03/19 16:38:58 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP

	#include "main.h"

	typedef struct	s_Data
	{
		std::string		name;
		unsigned int	id;
	}				Data;

	class Serializer
	{
		public:
			Serializer(void);
			~Serializer(void);
			Serializer(Serializer const &copy);
			Serializer const	&operator=(Serializer const &copy);

			static uintptr_t serialize(Data* ptr);
			static Data* deserialize(uintptr_t raw);
	};

#endif
