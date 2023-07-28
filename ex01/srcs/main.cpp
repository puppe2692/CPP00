/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:37:31 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/28 15:03:55 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int	ft_atoi(std::string str)
{
	int	i;
	int	rslt;
	int	sign;

	i = 0;
	rslt = 0;
	sign = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == 45)
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		rslt = rslt * 10;
		rslt = rslt + str[i] - 48;
		i++;
	}
	return (rslt * sign);
}

std::string	ft_get_new_contact(std::string variable)
{
	std::string buff;
	while (1)
	{
		std::cout << "Enter " << variable << std::endl;
		std::getline(std::cin, buff);
		if (buff.length() > 0)
			break;
	}
	return (buff);
}

int	main(void)
{
	phonebook	phonebook;
	std::string	input;
	std::string	newuser[5];
	int			id;


	while (1)
	{
		std::cout << "Welcome to Phonebook" << std::endl;
		std::cout << "Please enter your command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (!std::cin)
			break ;
		if (input == "ADD")
		{
			newuser[0] = ft_get_new_contact("First Name");
			newuser[1] = ft_get_new_contact("Last Name");
			newuser[2] = ft_get_new_contact("Nickname");
			newuser[3] = ft_get_new_contact("Phone Number");
			newuser[4] = ft_get_new_contact("Secret");
			phonebook.ft_add_contact(newuser[0], newuser[1], newuser[2], newuser[3], newuser[4]);
		}
		if (input == "SEARCH")
		{
			phonebook.ft_show_list();
			while (1)
			{
				std::cout << "Please enter the contact index you're looking for :" << std::endl;
				std::getline(std::cin, input);
				if (!std::cin)
					break ;
				if (input.length() == 1 && (input[0] >= '0' && input[0] <= '7'))
				{
					id = ft_atoi(input);
					break ;
				}
				else
					std::cout << "Incorrect Index Format" << std::endl;
			}
			phonebook.ft_show_contact(id);
		}
		if (input == "EXIT")
		{
			break ;
		}
	}
}