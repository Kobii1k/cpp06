/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:20:47 by mgagne            #+#    #+#             */
/*   Updated: 2024/07/30 17:16:06 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int     main( void )
{
        Base *Identifier = NULL;
        Identifier = Identifier->generate( );

        std::cout << "Base	: " << Identifier << std::endl;

        if (Identifier != NULL)
        {
			Identifier->identify(Identifier);
			Identifier->identify(*Identifier);
			delete Identifier;
        }
		return (0);
}
