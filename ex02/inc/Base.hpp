/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:24:21 by mgagne            #+#    #+#             */
/*   Updated: 2024/07/30 17:06:59 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
	#define BASE_HPP

	#include "main.h"

	class Base
	{
		public:
			Base(void);
			virtual ~Base(void);

			Base * generate(void);
			void identify(Base& p);
			void identify(Base* p);
	};

#endif
