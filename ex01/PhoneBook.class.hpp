/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:22:01 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/06 10:16:22 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_CLASS_HPP
	#define PHONEBOOK_CLASS_HPP

	#include "Contact.class.hpp"
	#include <iostream>
	#include <iomanip>
	#include <locale>
	#define	MAX_CONTACTS 8
	#define SEARCH_FIELD_WIDTH 10
	class PhoneBook
	{
	private:
		Contact			_contacts[MAX_CONTACTS];
		int				_index;
	protected:
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void	add( void );
		void	search( void ) const;
	};

#endif
