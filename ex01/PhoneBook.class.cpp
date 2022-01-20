/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:38:36 by coder             #+#    #+#             */
/*   Updated: 2022/01/19 23:38:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->nContacts = 0;
}

std::string PhoneBook::getUserAction(void)
{
	std::string option;

	option = "";
	while (option != "ADD" && option != "SEARCH" && option != "EXIT")
	{
		std::cout << "Choose one of the following commands:" << std::endl;
		std::cout << "ADD: save a new contact " << std::endl;
		std::cout << "SEARCH: display a specific contact" << std::endl;
		std::cout << "EXIT: exit the program" << std::endl;
		std::cin >> option;
	}
	return (option);
}

void PhoneBook::addContact(void)
{
	std::string option;

	this->contacts[nContacts].index = this->nContacts;
	this->contacts[nContacts].setFirsName();
	this->contacts[nContacts].setlastName();
	this->contacts[nContacts].setNickname();
	this->contacts[nContacts].setPhoneNumber();
	this->contacts[nContacts].setDarkestSecret();
	if (this->nContacts < 8)
		this->nContacts +=1;

}