/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:12:03 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/11 15:12:06 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::initProperties(std::string name, FragTrap *fragtrap) {
  srand((unsigned int)time(NULL));
  fragtrap->_name = name;
  fragtrap->_energyPoints = 100;
  fragtrap->_maxEnergyPoints = 100;
  fragtrap->_meleeAttackDamage = 30;
  fragtrap->_rangedAttackDamage = 20;
  fragtrap->_armorDamageReduction = 5;
}

std::string FragTrap::getName(void) {
  return (this->_name);
}

FragTrap::FragTrap(void) {
  initProperties("57UP1D-TP", this);
  std::cout << "<" << this->_name << "> This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap(std::string name) {
  initProperties(name, this);
  std::cout << "<" << this->_name << "> Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & model) {
  *this = model;
  std::cout << "<" << this->_name << "> Can I just say... yeehaw." << std::endl;
}

FragTrap::~FragTrap(void) {
  std::cout << "<" << this->_name << "> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
  int random = rand() % 5;
  // std::cout << "Le random donne : " << random << std::endl;
  if (this->_energyPoints == 0) {
    std::cout << "<FR4G-TP> " << this->_name << " has no energy..." << std::endl;
    std::cout << "<" << this->_name << "> Who needs energy anyway, am I right?" << std::endl;
  } else {
    this->_energyPoints -= 25;
    std::cout << "<FR4G-TP> " << this->_name <<  " try an epic attack on " << target << "!!!" << std::endl;
    switch (random) {
      case 0 :
        std::cout << "<FR4G-TP> " << this->_name <<  " just accomplished a critical attack !" << std::endl;
        std::cout << "<" << this->_name <<  "> Crit-i-cal!" << std::endl;
        break;
      case 1 :
        std::cout << "<FR4G-TP> " << this->_name <<  " just accomplished a freezing attack !" << std::endl;
        std::cout << "<" << this->_name <<  "> Aww! Now I want a snow cone." << std::endl;
        break;
      case 2 :
        std::cout << "<FR4G-TP> " << this->_name <<  " just accomplished a fire attack !" << std::endl;
        std::cout << "<" << this->_name <<  "> Remember, use caution near an open flame!" << std::endl;
        break;
      case 3 :
        std::cout << "<FR4G-TP> " << this->_name <<  " just accomplished a corosive attack !" << std::endl;
        std::cout << "<" << this->_name <<  "> Wait, this isn't vegetable juice!" << std::endl;
        break;
      case 4 :
        std::cout << "<FR4G-TP> " << this->_name <<  " just accomplished an electric attack !" << std::endl;
        std::cout << "<" << this->_name <<  "> Shocking, isn't it?" << std::endl;
        break;
      default :
        std::cout << "<FR4G-TP> " << this->_name <<  " just accomplished... Nothing..." << std::endl;
        std::cout << "<" << this->_name <<  "> Well..." << std::endl;
        break;
    }
  }
}
