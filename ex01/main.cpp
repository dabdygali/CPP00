/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:50:43 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/05 16:57:35 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <cstdlib>
#include <string>

int	main( void )
{
	std::string	user_command;
	PhoneBook	phonebook;

	while (user_command.compare("EXIT"))
	{
		std::cout << "MAIN MENU. CHOOSE COMMAND: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, user_command);
		if (!user_command.compare("ADD") || !user_command.compare("add"))
		{
			std::cout << std::endl;
			phonebook.add();
		}
		else if (!user_command.compare("SEARCH") || !user_command.compare("search"))
		{
			std::cout << std::endl;
			phonebook.search();
		}
		else if (!user_command.compare("EXIT") || !user_command.compare("exit"))
		{
			return EXIT_SUCCESS;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "COMMAND NOT RECOGNIZED" << std::endl;
		}
		std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}
