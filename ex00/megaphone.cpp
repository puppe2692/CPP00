/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:56:42 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/26 18:21:39 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cstring>
# include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	if (argc == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[++j])
	{
		i = -1;
		while (argv[j][++i])
			std :: cout << (char)toupper(argv[j][i]);
	}
	std :: cout << std :: endl;
	return (0);
}