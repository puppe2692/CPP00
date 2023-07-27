/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:55:57 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/27 16:29:57 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int	phonebook::_nbContact = 0;
int	phonebook::_totalContact = 0; // pas bien compris les decla static et non static

phonebook::phonebook(void)
{
	return;
}

phonebook::~phonebook(void)
{
	return;
}

void	phonebook::ft_add_contact(std::string firstName, std::string lastName,
						std::string nickName, std::string phoneNumber, std::string secret)
{
	this->phonebook::carnet[phonebook::_nbContact].ft_set_firstname(firstName);
	this->phonebook::carnet[phonebook::_nbContact].ft_set_lastname(lastName);
	this->phonebook::carnet[phonebook::_nbContact].ft_set_nickname(nickName);
	this->phonebook::carnet[phonebook::_nbContact].ft_set_phonenumber(phoneNumber);
	this->phonebook::carnet[phonebook::_nbContact].ft_set_secret(secret);
	phonebook::_nbContact++;
	phonebook::_nbContact %= 8; // verifier pourquoi
	if (phonebook::_totalContact < 8)
	{
		phonebook::_totalContact++;
	}
}

void	phonebook::ft_show_contact(int index)
{
	
}