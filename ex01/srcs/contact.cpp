/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:32:19 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/28 15:11:13 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

contact::contact(void)
{
	return ;
}

contact::~contact(void)
{
	return ;
}

void	contact::ft_set_firstname(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void	contact::ft_set_lastname(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void	contact::ft_set_nickname(std::string nickName)
{
	this->_nickName = nickName;
	return ;
}

void	contact::ft_set_phonenumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

void	contact::ft_set_secret(std::string secret)
{
	this->_secret = secret;
	return ;
}

std::string		contact::ft_get_firstname(void)
{
	return (this->_firstName);
}

std::string		contact::ft_get_lastname(void)
{
	return (this->_lastName);
}

std::string		contact::ft_get_nickname(void)
{
	return (this->_nickName);
}

std::string		contact::ft_get_phonenumber(void)
{
	return (this->_phoneNumber);
}

std::string		contact::ft_get_secret(void)
{
	return (this->_secret);
}

void	contact::ft_display_short(void)
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

/*void	contact::ft_display_long(void)
{
	std::cout << "First Name : " << this->_firstName << std::endl;
	std::cout << "Last Name : " << this->_firstName << std::endl;
	std::cout << "Nickname : " << this->_firstName << std::endl;
	std::cout << "Phone Number : " << this->_firstName << std::endl;
	std::cout << "Secret : " << this->_firstName << std::endl;
} */