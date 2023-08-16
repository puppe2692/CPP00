/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:55:57 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/16 09:16:12 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	PhoneBook::_nbContact = 0;
int	PhoneBook::_totalContact = 0;

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::ft_add_contact(std::string firstName, std::string lastName,
						std::string nickName, std::string phoneNumber, std::string secret)
{
	this->PhoneBook::carnet[PhoneBook::_nbContact].ft_set_firstname(firstName);
	this->PhoneBook::carnet[PhoneBook::_nbContact].ft_set_lastname(lastName);
	this->PhoneBook::carnet[PhoneBook::_nbContact].ft_set_nickname(nickName);
	this->PhoneBook::carnet[PhoneBook::_nbContact].ft_set_phonenumber(phoneNumber);
	this->PhoneBook::carnet[PhoneBook::_nbContact].ft_set_secret(secret);
	PhoneBook::_nbContact++;
	PhoneBook::_nbContact %= 8;
	if (PhoneBook::_totalContact < 8)
	{
		PhoneBook::_totalContact++;
	}
}

void	PhoneBook::ft_show_contact(int index)
{
	std::cout << "First Name : " << this->PhoneBook::carnet[index].ft_get_firstname() << std::endl;
	std::cout << "Last Name : " << this->PhoneBook::carnet[index].ft_get_lastname() << std::endl;
	std::cout << "Nickame : " << this->PhoneBook::carnet[index].ft_get_nickname() << std::endl;
	std::cout << "Phonenumber : " << this->PhoneBook::carnet[index].ft_get_phonenumber() << std::endl;
	std::cout << "Secret : " << this->PhoneBook::carnet[index].ft_get_secret() << std::endl;
}

void	PhoneBook::ft_show_list(void)
{
	int	i;

	i = 0;
	std::cout << "INDEX     |FIRST NAME|LAST NAME |NICKNAME  " << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(10) << std::setfill (' ') << std::right << i << "|";
		this->PhoneBook::carnet[i].ft_display_short();
		i++;
	}
}

int		PhoneBook::ft_totalcontact(void)
{
	return (this->PhoneBook::_totalContact);
}

int		PhoneBook::ft_nbconctact(void)
{
	return (this->PhoneBook::_nbContact);
}