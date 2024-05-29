/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:22:01 by dabdygal          #+#    #+#             */
/*   Updated: 2024/05/06 15:15:12 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
	#define PHONEBOOK_CLASS_HPP

	#include "Contact.class.hpp"
	#define	MAX_CONTACTS 8
	class PhoneBook
	{
	private:
		Contact	_contacts[MAX_CONTACTS];
	protected:
	public:
		PhoneBook( void );
		~PhoneBook( void );
	};

#endif