/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:38:36 by coder             #+#    #+#             */
/*   Updated: 2022/01/24 02:30:54 by coder            ###   ########.fr       */
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

static std::string truncate(std::string field)
{
	std::string	sentence;

	if (field.length() > 10)
	{
		sentence = field.substr(0,10);
		sentence[9] = '.';
		return (sentence);
	}
	else
	{
		return (field);
	}
}

std::string PhoneBook::displayMenu(int i, std::string field)
{
	std::string sentence;
	
	if (field == "firstName")
	{
		sentence = this->contacts[i].getFirsName();
		sentence = truncate(sentence);
	}
	if (field == "lastName")
	{
		sentence = this->contacts[i].getlastName();
		sentence = truncate(sentence);
	}
	if (field == "nickname")
	{
		sentence = this->contacts[i].getNickname();
		sentence = truncate(sentence);
	}
	return (sentence);
}

void	PhoneBook::displayData(int option)
{
	if ((option > this->nContacts) || (option < 1))
	{
		std::cout << "Invalid option. Choose values between 1 and "<< this->nContacts << std::endl;
	}
	else
	{
		std::cout << "First name: " << this->contacts[option - 1].getFirsName() << std::endl;
		std::cout << "Last name: " << this->contacts[option - 1].getlastName() << std::endl;
		std::cout << "Nickname: " << this->contacts[option - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << this->contacts[option - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->contacts[option - 1].getDarkestSecret() << std::endl;
	}
}

void PhoneBook::searchContact(void)
{
	int i;
	int index;	
	std::string option;

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
			std::cout << displayMenu(i - 1, "firstName") << "|";
			std::cout << std::setw(10);
			std::cout << displayMenu(i - 1, "lastName") << "|";
			std::cout << std::setw(10);
			std::cout << displayMenu(i - 1, "nickname")<< "|"<< std::endl;
		}
		std::cout << "Choose the index of the contact you want more information" << std::endl;
		std::cin >> option;
		index = atoi(option.c_str());
		displayData(index);
	}
	else
	{
		std::cout << "You don't have any contact yet!" << std::endl;
	}
}