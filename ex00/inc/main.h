/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:57:24 by mgagne            #+#    #+#             */
/*   Updated: 2024/03/19 14:58:56 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
	#define MAIN_H

	#include <iostream>
	#include <iomanip>
	#include <string>
	#include <stdlib.h>
	#include <cerrno>

	#define CONSTRUCTOR ": Constructor called"
	#define DESTRUCTOR ": Destructor called"
	#define CPYCONSTRUCTOR ": Copy Constructor called"

	#define INT_MAX	2147483647
	#define INT_MIN	-2147483648

	enum
	{
		CHAR,
		INT,
		FLOAT,
		DOUBLE
	};

#endif
