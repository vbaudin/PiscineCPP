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
  fragtrap->_name = name;
  fragtrap->_hitPoints = 100;
  fragtrap->_maxHitPoints = 100;
  fragtrap->_energyPoints = 100;
  fragtrap->_maxEnergyPoints = 100;
  fragtrap->_level = 1;
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

void FragTrap::rangedAttack(std::string const & target) {
  std::cout << "<FR4G-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
  std::cout << "<FR4G-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints == 0) {
    std::cout << "<FR4G-TP> " << this->_name << " is already dead... Stop hitting this corpse... Cunt." << std::endl;
  } else if (this->_hitPoints <= amount) {
    this->_hitPoints = 0;
    std::cout << "<FR4G-TP> " << this->_name << " has now " << this->_hitPoints << "hit points, RIP in peperonni." << std::endl;
  } else {
    this->_hitPoints -= amount;
    std::cout << "<FR4G-TP> " << this->_name <<  " has take " << amount << "damages, he has now " << this->_hitPoints << "hit points, RIP in peperonni." << std::endl;
  }
}

void FragTrap::beRepaired(unsigned int amount) {
  if (this->_hitPoints == 100) {
    std::cout << "<FR4G-TP> " << this->_name << " is already full life... Stop doing dumb fuck things... Idiot." << std::endl;
  } else if (this->_maxHitPoints <= (this->_hitPoints + amount)) {
    this->_hitPoints = 100;
    std::cout << "<FR4G-TP> " << this->_name << " has now " << this->_hitPoints << "hit points." << std::endl;
  } else {
    this->_hitPoints -= amount;
    std::cout << "<FR4G-TP> " << this->_name <<  " has take " << amount << "damages, he has now " << this->_hitPoints << "hits points, RIP in peperonni." << std::endl;
  }
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
  if (this->_energyPoints == 0) {
    std::cout << "<FR4G-TP> " << this->_name << " has no energy..." << std::endl;
    std::cout << "<" << this->_name << "> Who needs energy anyway, am I right?" << std::endl;
  } else {
    this->_energyPoints -= 25;
    std::cout << "<FR4G-TP> " << this->_name <<  " try an epic attack !!!" << std::endl;
  }
}