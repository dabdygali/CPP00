/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:25:49 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/06 10:15:03 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void )
{
}

Contact::~Contact( void )
{
}

void	Contact::setFirstName(std::string& str)
{
	this->_first_name = str;
	return;
}

void	Contact::setLastName(std::string& str)
{
	this->_last_name = str;
	return;
}

void	Contact::setNickname(std::string& str)
{
	this->_nickname = str;
	return;
}

void	Contact::setPhoneNumber(std::string& str)
{
	this->_phone_number = str;
	return;
}

void	Contact::setDarkestSecret(std::string& str)
{
	this->_darkest_secret = str;
	return;
}

std::string	Contact::getFirstName( void ) const
{
	return _first_name;
}

std::string	Contact::getLastName( void ) const
{
	return _last_name;
}

std::string	Contact::getNickname( void ) const
{
	return _nickname;
}

std::string	Contact::getPhoneNumber( void ) const
{
	return _phone_number;
}

std::string	Contact::getDarkestSecret( void ) const
{
	return _darkest_secret;
}

bool	Contact::empty( void ) const
{
	return _first_name.empty();
}
