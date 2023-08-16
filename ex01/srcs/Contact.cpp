/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:32:19 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 15:23:51 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::ft_set_firstname(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void	Contact::ft_set_lastname(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void	Contact::ft_set_nickname(std::string nickName)
{
	this->_nickName = nickName;
	return ;
}

void	Contact::ft_set_phonenumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

void	Contact::ft_set_secret(std::string secret)
{
	this->_secret = secret;
	return ;
}

std::string		Contact::ft_get_firstname(void)
{
	return (this->_firstName);
}

std::string		Contact::ft_get_lastname(void)
{
	return (this->_lastName);
}

std::string		Contact::ft_get_nickname(void)
{
	return (this->_nickName);
}

std::string		Contact::ft_get_phonenumber(void)
{
	return (this->_phoneNumber);
}

std::string		Contact::ft_get_secret(void)
{
	return (this->_secret);
}

void	Contact::ft_display_short(void)
{
	if (this->_firstName.length() > 10)
		std::cout << std::setw(10) << std::setfill (' ') << std::right << this->_firstName.substr(0,9) + "." << "|";
	else
		std::cout << std::setw(10) << std::setfill (' ') << std::right << this->_firstName << "|";
	if (this->_lastName.length() > 10)
		std::cout << std::setw(10) << std::setfill (' ') << std::right << this->_lastName.substr(0,9) + "." << "|";
	else
		std::cout << std::setw(10) << std::setfill (' ') << std::right << this->_lastName << "|";
	if (this->_nickName.length() > 10)
		std::cout << std::setw(10) << std::setfill (' ') << std::right << this->_nickName.substr(0,9) + "." << std::endl;
	else
		std::cout << std::setw(10) << std::setfill (' ') << std::right << this->_nickName << std::endl;
}
