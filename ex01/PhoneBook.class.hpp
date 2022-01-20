/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:38:36 by coder             #+#    #+#             */
/*   Updated: 2022/01/20 02:50:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define  PHONEBOOK_CLASS_H
#include "Contact.class.hpp"

class PhoneBook {

public:
	int nContacts;
	Contact contacts[8];

	PhoneBook(void);
	std::string getUserAction(void);
	void addContact(void);
};

#endif