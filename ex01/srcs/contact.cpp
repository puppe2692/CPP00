/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:32:19 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/27 14:58:50 by nwyseur          ###   ########.fr       */
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
	return (this->_firstName); // pourquoi oblige de mettre this ici?
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
