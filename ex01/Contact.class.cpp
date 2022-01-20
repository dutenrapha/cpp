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

void  Contact::setFirsName(std::string firstName)
{
	this->_firstName = firstName;
}

void  Contact::setlastName(std::string lastName)
{
	this->_lastName = lastName;
}

void  Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void  Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void  Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}