/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:33:49 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 11:33:51 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
  std::string		string = "HI THIS IS BRAIN";
	std::string   *pointer = &string;
	std::string   &reference = string;

	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
}
