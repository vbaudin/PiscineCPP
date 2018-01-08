/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:15:32 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/08 14:19:59 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(int ac, char **av)
{
	std::string ret;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		ret += av[i];
	}
	for (int i = 0; ret[i] != '\0'; i++)
	{
		ret[i] = toupper(ret[i]);
	}
	std::cout << ret << std::endl;
	return (0);
}
