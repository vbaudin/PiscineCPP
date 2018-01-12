/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:49:24 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/12 17:49:25 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void NinjaTrap::initProperties(std::string name, NinjaTrap *NinjaTrap) {
  srand((unsigned int)time(NULL));
  NinjaTrap->_name = name;
  NinjaTrap->_hitPoints = 60;
  NinjaTrap->_maxHitPoints = 60;
  NinjaTrap->_energyPoints = 120;
  NinjaTrap->_maxEnergyPoints = 120;
  NinjaTrap->_meleeAttackDamage = 60;
  NinjaTrap->_rangedAttackDamage = 5;
  NinjaTrap->_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(void) {
  initProperties("57UP1D-TP", this);
  std::cout << "<" << this->_name << "> This time it'll be awesome, I promise!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) {
  initProperties(name, this);
  std::cout << "<" << this->_name << "> Let's get this party started!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & model) {
  *this = model;
  std::cout << "<" << this->_name << "> Can I just say... yeehaw." << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
  std::cout << "<" << this->_name << "> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap robot) {
  std::cout << robot._name << " is a FragTrap !!!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap robot) {
  std::cout << robot._name << " is a ScavTrap !!!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap robot) {
  std::cout << robot._name << " is a NinjaTrap !!!" << std::endl;
}
