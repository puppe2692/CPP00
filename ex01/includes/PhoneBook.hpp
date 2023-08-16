/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:14:08 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/16 09:13:07 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	public:
			PhoneBook(void);
			~PhoneBook(void);

			void	ft_add_contact(std::string firstName, std::string lastName,
						std::string nickName, std::string phoneNumber, std::string secret);
			void	ft_show_contact(int index);
			void	ft_show_list(void);
			int		ft_totalcontact(void);
			int		ft_nbconctact(void);

	private:
			Contact			carnet[8];
			static int		_totalContact;
			static int		_nbContact;
};

#endif