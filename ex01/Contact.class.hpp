/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:54:48 by coder             #+#    #+#             */
/*   Updated: 2022/01/20 03:47:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define  CONTACT_CLASS_H
#include <string>

class Contact {

public:
	int index;
	Contact(void);
	std::string 	getFirsName(void) const;
	std::string 	getlastName(void) const;
	std::string  	getNickname(void) const;
	std::string  	getPhoneNumber(void) const;
	std::string  	getDarkestSecret(void) const;
	void  			setFirsName(void);
	void  			setlastName(void);
	void  			setNickname(void);
	void  			setPhoneNumber(void);
	void  			setDarkestSecret(void);
	
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif