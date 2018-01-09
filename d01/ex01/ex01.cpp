/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:12:47 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 17:12:49 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void memoryLeak()
{
  std::string* panthere = new std::string("String panthere");
  std::cout << *panthere << std::endl;
  delete panthere;
}
