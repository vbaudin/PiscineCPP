/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:24:22 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 17:24:24 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string 	ft_capitalize(std::string str)
{
	std::string 	str2;

	for (size_t i = 0; i < str.size(); i++)
		str2 += toupper(str[i]);
	return str2;
}

void	ft_replace(char **argv)
{
	std::string 	s1;
	std::string 	s2;
	std::string 	replacedFile;
	std::ofstream	file2;
	std::ifstream	file;
	std::streampos	size;

  replacedFile = ft_capitalize(argv[1]);
	replacedFile += ".replace";
	file2.open(replacedFile);
	s1 = argv[2];
	s2 = argv[3];
	file.open(argv[1]);
	if (file.is_open())
	{
		file.seekg(0, std::ios::end);
		size = file.tellg();
		std::string	buffer(size, ' ');
		file.seekg(0, std::ios::beg);
		file.read(&buffer[0], size);
		while (buffer.find(s1) != (size_t)-1)
			buffer.replace(buffer.find(s1), s1.length(), s2);
		file2 << buffer;
		file.close();
	}
	else
		std::cout << "Error: Unable to open file." << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error: usage: ./replace <Filename> <string1> <string2>" << std::endl;
	else
		ft_replace(argv);
	return (0);
}
