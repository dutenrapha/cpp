/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:38:36 by coder             #+#    #+#             */
/*   Updated: 2022/01/25 19:41:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define  PHONEBOOK_CLASS_H
#include "Contact.class.hpp"
#include <stdlib.h> 

class PhoneBook {

public:
	int nContacts;
	int currentIndex;
	Contact contacts[8];

	PhoneBook(void);
	~PhoneBook(void);
	std::string 	getUserAction(void);
	std::string		displayMenu(int i, std::string field);
	void			addContact(void);
	void 			searchContact(void);
	void			displayData(int option);
};

#endif