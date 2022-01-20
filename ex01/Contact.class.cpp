/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:55:47 by coder             #+#    #+#             */
/*   Updated: 2022/01/20 02:46:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
	return;
}

std::string Contact::getFirsName(void) const
{
	return this->_firstName;
}

std::string Contact::getlastName(void) const
{
	return this->_lastName;
}

std::string Contact::getNickname(void) const
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}

void  Contact::setFirsName(void)
{
	std::string firstName;

	firstName = "";
	while (firstName == "")
	{
		std::cout << "First name: " << std::endl;
		std::cin >> firstName;
	}
	this->_firstName = firstName;
}

void  Contact::setlastName(void)
{
	std::string lastName;

	lastName = "";
	while (lastName == "")
	{
		std::cout << "Last name: " << std::endl;
		std::cin >> lastName;
	}
	this->_lastName = lastName;
}

void  Contact::setNickname(void)
{
	std::string nickname;

	nickname = "";
	while (nickname == "")
	{
		std::cout << "Nickname: " << std::endl;
		std::cin >> nickname;
	}
	this->_nickname = nickname;
}

void  Contact::setPhoneNumber(void)
{
	std::string phoneNumber;
	
	phoneNumber = "";
	while (phoneNumber == "")
	{
		std::cout << "Phone number: " << std::endl;
		std::cin >> phoneNumber;
	}
	this->_phoneNumber = phoneNumber;
}

void  Contact::setDarkestSecret(void)
{
	std::string darkestSecret;

	darkestSecret = "";
	while (darkestSecret == "")
	{
		std::cout << "Darkest Secret: " << std::endl;
		std::cin >> darkestSecret;
	}
	this->_darkestSecret = darkestSecret;
}