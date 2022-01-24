/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:38:36 by coder             #+#    #+#             */
/*   Updated: 2022/01/24 01:46:56 by coder            ###   ########.fr       */
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
	std::string 	getUserAction(void);
	std::string		Display(int i, std::string field);
	void			addContact(void);
	void 			searchContact(void);
};

#endif