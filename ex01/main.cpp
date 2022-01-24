/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:16:40 by coder             #+#    #+#             */
/*   Updated: 2022/01/23 20:05:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string userAction;

	userAction = "";
	while (userAction != "EXIT")
	{
		userAction = phonebook.getUserAction();
		if (userAction == "ADD")
		{
			phonebook.addContact();	
		}
		if (userAction == "SEARCH")
		{
			phonebook.searchContact();	
		}
	}
    return 0;
}