/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:38:36 by coder             #+#    #+#             */
/*   Updated: 2022/01/21 19:22:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> 
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
		std::cout << std::endl;
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
	if (this->nContacts != 8)
		this->nContacts +=1;
	this->contacts[this->nContacts - 1].index = this->nContacts;
	this->contacts[this->nContacts - 1].setFirsName();
	this->contacts[this->nContacts - 1].setlastName();
	this->contacts[this->nContacts - 1].setNickname();
	this->contacts[this->nContacts - 1].setPhoneNumber();
	this->contacts[this->nContacts - 1].setDarkestSecret();

	std::cout << "contact successfully added" << std::endl;
}

void PhoneBook::searchContact(void)
{
	int i;
	if (this->nContacts > 0)
	{
		std::cout << std::setw(10);
		std::cout << "Index" << "|";
		std::cout << std::setw(10);
		std::cout << "First name" << "|";
		std::cout << std::setw(10);
		std::cout << "Last name" << "|";
		std::cout << std::setw(10);
		std::cout << "Nickname" << "|"<< std::endl;

		for (i = 1; i <= this->nContacts ; i++)
		{
			std::cout << std::setw(10);
			std::cout << this->contacts[i - 1].getIndex() << "|";
			std::cout << std::setw(10);
			std::cout << this->contacts[i - 1].getFirsName() << "|";
			std::cout << std::setw(10);
			std::cout << this->contacts[i - 1].getlastName() << "|";
			std::cout << std::setw(10);
			std::cout << this->contacts[i - 1].getNickname() << "|"<< std::endl;
		}
	}
	else
	{
		std::cout << "You don't have any contact yet!" << std::endl;
	}
}