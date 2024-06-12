/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:22:06 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/06 10:17:30 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_CLASS_HPP
	#define CONTACT_CLASS_HPP

	#include <string>
	class Contact
	{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
	protected:
	public:
		Contact(void);
		~Contact(void);
		void		setFirstName(std::string& str);
		void		setLastName(std::string& str);
		void		setNickname(std::string& str);
		void		setPhoneNumber(std::string& str);
		void		setDarkestSecret(std::string& str);
		std::string	getFirstName( void ) const;
		std::string	getLastName( void ) const;
		std::string	getNickname( void ) const;
		std::string	getPhoneNumber( void ) const;
		std::string	getDarkestSecret( void ) const;
		bool		empty() const;
	};
	
#endif
