/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:25:45 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/06 10:16:25 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void )
{
	this->_index = 0;
}

PhoneBook::~PhoneBook( void )
{
}

void	PhoneBook::add( void )
{
	std::string str;

	std::cout << "Adding contact, enter the following fields:" << std::endl;
	std::cout << "First name:	";
	std::getline(std::cin, str);
	while (str.empty() || str.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
	{
		std::cout << "Contact can not have empty fields. Enter the field:" << std::endl;
		std::cout << "First name:	";
		std::getline(std::cin, str);
	}
	_contacts[_index].setFirstName(str);

	std::cout << "Last name:	";
	std::getline(std::cin, str);
	while (str.empty() || str.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
	{
		std::cout << "Contact can not have empty fields. Enter the field:" << std::endl;
		std::cout << "Last name:	";
		std::getline(std::cin, str);
	}
	_contacts[_index].setLastName(str);

	std::cout << "Nickname:	";
	std::getline(std::cin, str);
	while (str.empty() || str.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
	{
		std::cout << "Contact can not have empty fields. Enter the field:" << std::endl;
		std::cout << "Nickname:	";
		std::getline(std::cin, str);
	}
	_contacts[_index].setNickname(str);

	std::cout << "Phone number:	";
	std::getline(std::cin, str);
	while (str.empty() || str.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
	{
		std::cout << "Contact can not have empty fields. Enter the field:" << std::endl;
		std::cout << "Phone number:	";
		std::getline(std::cin, str);
	}
	_contacts[_index].setPhoneNumber(str);

	std::cout << "Darkest secret:	";
	std::getline(std::cin, str);
	while (str.empty() || str.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
	{
		std::cout << "Contact can not have empty fields. Enter the field:" << std::endl;
		std::cout << "Darkest secret:	";
		std::getline(std::cin, str);
	}
	_contacts[_index].setDarkestSecret(str);

	std::cout<<"Contact saved" << std::endl;

	_index++;
	if (_index >= MAX_CONTACTS)
		_index = 0;
	return;
}

void	PhoneBook::search( void ) const
{
	int			i;
	std::string	str;
	std::locale	loc;

	if (_contacts[0].empty())
	{
		std::cout << "NO CONTACTS TO DISPLAY" << std::endl;
		return;
	}

	std::cout << "-------------------SEARCH------------------" << std::endl;

	std::cout << std::setiosflags(std::ios_base::right);
	std::cout << std::setw(SEARCH_FIELD_WIDTH);
	std::cout << "Index";
	std::cout << std::setw(1);
	std::cout << "|";

	std::cout << std::setw(SEARCH_FIELD_WIDTH);
	std::cout << "First name";
	std::cout << std::setw(1);
	std::cout << "|";

	std::cout << std::setw(SEARCH_FIELD_WIDTH);
	std::cout << "Last name";
	std::cout << std::setw(1);
	std::cout << "|";

	std::cout << std::setw(SEARCH_FIELD_WIDTH);
	std::cout << "Nickname";
	std::cout << std::endl;

	i = 0;
	while (i < MAX_CONTACTS && !_contacts[i].empty())
	{
		std::cout << std::setw(SEARCH_FIELD_WIDTH);
		std::cout << i + 1;
		std::cout << std::setw(1);
		std::cout << "|";

		str = _contacts[i].getFirstName();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(".");
		}
		std::cout << std::setw(SEARCH_FIELD_WIDTH);
		std::cout << str;
		std::cout << std::setw(1);
		std::cout << "|";

		str = _contacts[i].getLastName();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(".");
		}
		std::cout << std::setw(SEARCH_FIELD_WIDTH);
		std::cout << str;
		std::cout << std::setw(1);
		std::cout << "|";

		str = _contacts[i].getNickname();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(".");
		}
		std::cout << std::setw(SEARCH_FIELD_WIDTH);
		std::cout << str;
		std::cout << std::setw(1);
		std::cout << std::endl;
		i++;
	}
	std::cout << "CHOOSE INDEX:" << std::endl;
	std::getline(std::cin, str);
	while (str.empty() || str.length() > 1 || !std::isdigit(str[0]) || str[0] - 48 > i || str[0] - 48 < 1)
	{
		std::cout << "INVALID INDEX." << std::endl;
		std::cout << "CHOOSE INDEX:" << std::endl;
		std::getline(std::cin, str);
	}
	i = str[0] - 48;
	std::cout << "First name:	" << _contacts[i - 1].getFirstName() << std::endl;
	std::cout << "Last name:	" << _contacts[i - 1].getLastName() << std::endl;
	std::cout << "Nickname:	" << _contacts[i - 1].getNickname() << std::endl;
	std::cout << "Phone number:	" << _contacts[i - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret:	" << _contacts[i - 1].getDarkestSecret() << std::endl;
	return;
}
