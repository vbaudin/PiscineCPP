/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:48:15 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/08 15:48:16 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <sstream>

class User {
  public:
    void static searchUser(User *users);
    void fillUser(int id);
    std::string m_id;
    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickName;
    std::string m_login;
    std::string m_postalAdress;
    std::string m_emailAdress;
    std::string m_phoneNumber;
    std::string m_birthdayDate;
    std::string m_favoriteMeal;
    std::string m_underwearColor;
    std::string m_darkestSecret;
};


#endif
