/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:23:35 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/08 15:23:38 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string itoa(int nb) {
  std::stringstream ss;
  ss << nb;
  std::string str = ss.str();
  return str;
}

int isCorrectId(User *users, std::string id) {
  int i = 0;

  while (i < 8) {
    if (id == users[i].m_id) {
      return 1;
    }
    i++;
  }
  return 0;
}

User getUserById(User *users, std::string id) {
  int i = 0;

  while (i < 8) {
    if (id == users[i].m_id) {
      return users[i];
    }
    i++;
  }
  return users[0];
}

std::string fillWithSpaces(int spacesNeeded) {
  std::string spaces;
  while (spacesNeeded) {
    spaces += " ";
    spacesNeeded--;
  }
  return spaces;
}

std::string createUserPresentation(User user) {
  std::string presentation;

  presentation += user.m_id;
  presentation += "         |";
  if (user.m_firstName.size() > 10) {
    presentation += user.m_firstName.substr(0, 9);
    presentation += '.';
  } else {
    presentation += user.m_firstName;
    presentation += fillWithSpaces(10 - user.m_firstName.size());
  }
  presentation += '|';
  if (user.m_lastName.size() > 10) {
    presentation += user.m_lastName.substr(0, 9);
    presentation += '.';
  } else {
    presentation += user.m_lastName;
    presentation += fillWithSpaces(10 - user.m_lastName.size());
  }
  presentation += "|";
  if (user.m_nickName.size() > 10) {
    presentation += user.m_nickName.substr(0, 9);
    presentation += '.';
  } else {
    presentation += user.m_nickName;
    presentation += fillWithSpaces(10 - user.m_nickName.size());
  }
  return presentation;
}

void printUserInfos(User user) {
  std::cout << "FirstName : " << user.m_firstName << std::endl;
  std::cout << "LastName : " << user.m_lastName << std::endl;
  std::cout << "NickName : " << user.m_nickName << std::endl;
  std::cout << "Login : " << user.m_login << std::endl;
  std::cout << "Postal Adress : " << user.m_postalAdress << std::endl;
  std::cout << "Email Adress : " << user.m_emailAdress << std::endl;
  std::cout << "Phone Number : " << user.m_phoneNumber << std::endl;
  std::cout << "Birthday Date : " << user.m_birthdayDate << std::endl;
  std::cout << "Favorite Meal : " << user.m_favoriteMeal << std::endl;
  std::cout << "Underwear Color : " << user.m_underwearColor << std::endl;
  std::cout << "Darkest Secret : " << user.m_darkestSecret << std::endl;
}

void printSavedUsers(User *users) {
  std::string presentation;
  presentation = "index     |first name|last name |nickname  \n";

  std::cout << presentation;
  for (int i = 0; i < 8; i++) {
    if (!users[i].m_firstName.empty()){
      std::cout << createUserPresentation(users[i]) << std::endl;
    }
  }
}

void User::searchUser(User *users) {
  std::string id;

  printSavedUsers(users);
  std::cout << "Choose an User from his ID" << std::endl;
  std::getline(std::cin, id);
  if (isCorrectId(users, id)) {
    printUserInfos(getUserById(users, id));
  } else {
    std::cout << "The id you used is invalid" << std::endl;
  }
}

void User::fillUser(int id) {
  std::cout << "You want to Add a New Contact." << std::endl;

  m_id = itoa(id);
  std::cout << "Tell me your firstname :" << std::endl;
  std::getline(std::cin, m_firstName);
  std::cout << "Tell me your lastname :" << std::endl;
  std::getline(std::cin, m_lastName);
  std::cout << "Tell me your nickname :" << std::endl;
  std::getline(std::cin, m_nickName);
  std::cout << "Tell me your login :" << std::endl;
  std::getline(std::cin, m_login);
  std::cout << "Tell me your postal adress :" << std::endl;
  std::getline(std::cin, m_postalAdress);
  std::cout << "Tell me your email adress :" << std::endl;
  std::getline(std::cin, m_emailAdress);
  std::cout << "Tell me your phone number :" << std::endl;
  std::getline(std::cin, m_phoneNumber);
  std::cout << "Tell me your birthday date :" << std::endl;
  std::getline(std::cin, m_birthdayDate);
  std::cout << "Tell me your favorite meal :" << std::endl;
  std::getline(std::cin, m_favoriteMeal);
  std::cout << "Tell me your underwear color :" << std::endl;
  std::getline(std::cin, m_underwearColor);
  std::cout << "Tell me your darkest secret :" << std::endl;
  std::getline(std::cin, m_darkestSecret);

  std::cout << "Congratulation " << m_firstName << " is now in your PhoneBook !!!" << std::endl;
}
