/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:55:57 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/27 17:32:17 by nwyseur          ###   ########.fr       */
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
	std::cout << "First Name : " << this->phonebook::carnet[phonebook::_nbContact].ft_get_firstname() << std::endl;
	std::cout << "Last Name : " << this->phonebook::carnet[phonebook::_nbContact].ft_get_lastname() << std::endl;
	std::cout << "Nickame : " << this->phonebook::carnet[phonebook::_nbContact].ft_get_nickname() << std::endl;
	std::cout << "Phonenumber : " << this->phonebook::carnet[phonebook::_nbContact].ft_get_phonenumber() << std::endl;
	std::cout << "Secret : " << this->phonebook::carnet[phonebook::_nbContact].ft_get_secret() << std::endl;
}

void	phonebook::ft_show_list(void)
{
	int	i;

	i = 0;
	std::cout << "INDEX     |FIRST NAME|LAST NAME |NICKNAME  " << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(10) << std::setfill (' ') << std::right << i << "|";
		this->phonebook::carnet[i].ft_display_short();
		i++;
	}
}

int		phonebook::ft_totalcontact(void)
{
	return (this->phonebook::_totalContact);
}

int		phonebook::ft_nbconctact(void)
{
	return (this->phonebook::_nbContact);
}