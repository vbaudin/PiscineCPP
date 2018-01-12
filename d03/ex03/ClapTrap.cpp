/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:41:54 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/12 14:41:56 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _level(1) {
  std::cout << "<CL4P-TP> Initializing a new ClapTrap !!!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _level(1) {
  std::cout << name << "<CL4P-TP> ClapTrap created by name" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & model) : _level(1) {
  *this = model;
  std::cout << "<CL4P-TP> ClapTrap created by copy" << std::endl;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "<CL4P-TP> Destroying a ClapTrap !!!" << std::endl;
}

void ClapTrap::setName(std::string name) {
  this->_name = name;
}

std::string ClapTrap::getName(void) {
  return (this->_name);
}

void ClapTrap::rangedAttack(std::string const & target) {
  std::cout << "<CL4P-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
  std::cout << "<CL4P-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints == 0) {
    std::cout << "<CL4P-TP> " << this->_name << " is already dead... Stop hitting this corpse... Cunt." << std::endl;
  } else if (this->_hitPoints <= amount) {
    this->_hitPoints = 0;
    std::cout << "<CL4P-TP> " << this->_name << " has now " << this->_hitPoints << "hit points, RIP in peperonni." << std::endl;
  } else {
    this->_hitPoints -= amount;
    std::cout << "<CL4P-TP> " << this->_name <<  " has take " << amount << "damages, he has now " << this->_hitPoints << "hit points." << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_hitPoints == this->_maxHitPoints) {
    std::cout << "<CL4P-TP> " << this->_name << " is already full life... Stop doing dumb fuck things... Idiot." << std::endl;
  } else if (this->_maxHitPoints <= (this->_hitPoints + amount)) {
    this->_hitPoints = this->_maxHitPoints;
    std::cout << "<CL4P-TP> " << this->_name << " has now " << this->_hitPoints << "hit points." << std::endl;
  } else {
    this->_hitPoints -= amount;
    std::cout << "<CL4P-TP> " << this->_name <<  " has take " << amount << "damages, he has now " << this->_hitPoints << "hits points, RIP in peperonni." << std::endl;
  }
}
