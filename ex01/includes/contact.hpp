/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:48:47 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/27 17:28:03 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class contact
{
	public :

			contact(void);
			~contact(void);

			void	ft_set_firstname(std::string firstName);
			void	ft_set_lastname(std::string lastName);
			void	ft_set_nickname(std::string nickName);
			void	ft_set_phonenumber(std::string phoneNumber);
			void	ft_set_secret(std::string secret);

			std::string	ft_get_firstname(void);
			std::string	ft_get_lastname(void);
			std::string	ft_get_nickname(void);
			std::string	ft_get_phonenumber(void);
			std::string	ft_get_secret(void);

			void	ft_display_short(void);
			// void	ft_display_long(void);

	private :

			std::string	_firstName;
			std::string	_lastName;
			std::string	_nickName;
			std::string	_phoneNumber;
			std::string	_secret;
};

#endif