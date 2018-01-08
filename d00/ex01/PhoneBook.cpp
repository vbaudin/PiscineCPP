/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:21:28 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/08 15:21:31 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int   findFreeEntry(User *users) {
  int i = 0;

  while (i < 8) {
    if (users[i].m_firstName.empty())
      return i;
    i++;
  }
  return 42;
}

int   main(void) {
  std::string action;
  User users[8];
  int ret = 0;

  std::cout << "Please, tell me what to do." << std::endl;
  while (!ret && std::getline(std::cin, action))
  {
    std::cout << "You ask me to : " << action << std::endl;

    if (action == "ADD") {
      if (findFreeEntry(users) != 42) {
        users[findFreeEntry(users)].fillUser(findFreeEntry(users));
      } else {
        std::cout << "You can't add more users." << std::endl;
      }
      std::cout << "Please, tell me what to do." << std::endl;
    } else if (action == "SEARCH") {
      User::searchUser(users);
      std::cout << "Please, tell me what to do." << std::endl;
    } else if (action == "EXIT") {
      std::cout << "You are leaving the PhoneBook ! See you soon !" << std::endl;
      ret = 1;
    } else {
      std::cout << "Please choose a correct command between ADD, SEARCH and EXIT" << std::endl;
      std::cout << "Please, tell me what to do." << std::endl;
    }
  }
}
