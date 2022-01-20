/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:16:40 by coder             #+#    #+#             */
/*   Updated: 2022/01/20 01:16:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int main(void)
{
	///////////////////////// TEST 1 ///////////////////////// 
	// Contact contacts;

	// contacts.setFirsName("Raphael");
	// contacts.setlastName("Dutenkefer");
	// contacts.setNickname("dutenrapha");
	// contacts.setPhoneNumber("5511262925");
	// contacts.setDarkestSecret("no way to say");


	// std::cout << "first_name: " << contacts.getFirsName() << std::endl;
	// std::cout << "last_name: " << contacts.getlastName() << std::endl;
	// std::cout << "nickname: " << contacts.getNickname() << std::endl;
	// std::cout << "phone_number: " << contacts.getPhoneNumber() << std::endl;
	// std::cout << "darkest_secret: " << contacts.getDarkestSecret() << std::endl;
	
	///////////////////////// TEST 2 ///////////////////////// 
	// PhoneBook phonebook;

	// phonebook.contacts[0].setFirsName("Raphael");
	// phonebook.contacts[0].setlastName("Dutenkefer");
	// phonebook.contacts[0].setNickname("dutenrapha");
	// phonebook.contacts[0].setPhoneNumber("5511262925");
	// phonebook.contacts[0].setDarkestSecret("no way to say");

	// phonebook.contacts[1].setFirsName("Aline");
	// phonebook.contacts[1].setlastName("Rocha");
	// phonebook.contacts[1].setNickname("arocha");
	// phonebook.contacts[1].setPhoneNumber("231342424");
	// phonebook.contacts[1].setDarkestSecret("no way to say again");

	// std::cout << "1 - first_name: " << phonebook.contacts[1].getFirsName() << std::endl;
	// std::cout << "1 - last_name: " << phonebook.contacts[1].getlastName() << std::endl;
	// std::cout << "1 - nickname: " << phonebook.contacts[1].getNickname() << std::endl;
	// std::cout << "1 - phone_number: " << phonebook.contacts[1].getPhoneNumber() << std::endl;
	// std::cout << "1 - darkest_secret: " << phonebook.contacts[1].getDarkestSecret() << std::endl;

	// std::cout << "0 - first_name: " << phonebook.contacts[0].getFirsName() << std::endl;
	// std::cout << "0 - last_name: " << phonebook.contacts[0].getlastName() << std::endl;
	// std::cout << "0 - nickname: " << phonebook.contacts[0].getNickname() << std::endl;
	// std::cout << "0 - phone_number: " << phonebook.contacts[0].getPhoneNumber() << std::endl;
	// std::cout << "0 - darkest_secret: " << phonebook.contacts[0].getDarkestSecret() << std::endl;

	PhoneBook phonebook;
	std::string userAction;

	userAction = "";
	while (userAction != "EXIT")
	{
		userAction = phonebook.getUserAction();
		if (userAction == "ADD")
		{
			std::cout << "User choose ADD!" << std::endl;	
		}
		if (userAction == "SEARCH")
		{
			std::cout << "User choose SEARCH!" << std::endl;	
		}
	}
    return 0;
}