/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:50:43 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/04 13:42:08 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <cstdlib>
#include <iostream>
#include <algorithm>

int	main( void )
{
	std::string	user_command;
	PhoneBook	phonebook;

	while (user_command.compare("EXIT"))
	{
		std::cout << "MAIN MENU. CHOOSE COMMAND: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, user_command);
		if (!user_command.compare("ADD"))
		{
			std::cout << "ADDED";
		}
		else if (!user_command.compare("SEARCH"))
		{
			std::cout << "SEARCHED";
		}
		else
		{
			std::cout << "COMMAND NOT RECOGNIZED";
		}
		
	}
	return EXIT_SUCCESS;
}
