/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:30:30 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/12 12:30:33 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::initProperties(std::string name, ScavTrap *ScavTrap) {
  srand((unsigned int)time(NULL));
  ScavTrap->_name = name;
  ScavTrap->_hitPoints = 100;
  ScavTrap->_maxHitPoints = 100;
  ScavTrap->_energyPoints = 50;
  ScavTrap->_maxEnergyPoints = 50;
  ScavTrap->_level = 1;
  ScavTrap->_meleeAttackDamage = 20;
  ScavTrap->_rangedAttackDamage = 15;
  ScavTrap->_armorDamageReduction = 3;
}

std::string ScavTrap::getName(void) {
  return (this->_name);
}

void ScavTrap::setName(std::string name) {
  this->_name = name;
}

ScavTrap::ScavTrap(void) {
  initProperties("N3KF3U-TP", this);
  std::cout << "<" << this->_name << "> Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
  initProperties(name, this);
  std::cout << "<" << this->_name << "> Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & model) {
  *this = model;
  std::cout << "<" << this->_name << "> Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "<" << this->_name << "> The robot is dead, long live the robot!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) {
  std::cout << "<5C4V-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
  std::cout << "<5C4V-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints == 0) {
    std::cout << "<5C4V-TP> " << this->_name << " is already dead... Stop hitting this corpse... Cunt." << std::endl;
  } else if (this->_hitPoints <= amount) {
    this->_hitPoints = 0;
    std::cout << "<5C4V-TP> " << this->_name << " has now " << this->_hitPoints << "hit points, RIP in peperonni." << std::endl;
  } else {
    this->_hitPoints -= amount;
    std::cout << "<5C4V-TP> " << this->_name <<  " has take " << amount << "damages, he has now " << this->_hitPoints << "hit points." << std::endl;
  }
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (this->_hitPoints == this->_maxHitPoints) {
    std::cout << "<5C4V-TP> " << this->_name << " is already full life... Stop doing dumb fuck things... Idiot." << std::endl;
  } else if (this->_maxHitPoints <= (this->_hitPoints + amount)) {
    this->_hitPoints = this->_maxHitPoints;
    std::cout << "<5C4V-TP> " << this->_name << " has now " << this->_hitPoints << "hit points." << std::endl;
  } else {
    this->_hitPoints -= amount;
    std::cout << "<5C4V-TP> " << this->_name <<  " has take " << amount << "damages, he has now " << this->_hitPoints << "hits points." << std::endl;
  }
}

void ScavTrap::challengeNewcomer(void) {
  int random = rand() % 5;
  // std::cout << "Le random donne : " << random << std::endl;
  if (this->_energyPoints == 0) {
    std::cout << "<5C4V-TP> " << this->_name << " has no energy..." << std::endl;
    std::cout << "<" << this->_name << "> Who needs energy anyway, am I right?" << std::endl;
  } else {
    this->_energyPoints -= 25;
    std::cout << "<5C4V-TP> " << this->_name <<  " try an epic challenge !!!" << std::endl;
    switch (random) {
      case 0 :
        std::cout << "<5C4V-TP> " << this->_name <<  " started to dance!" << std::endl;
        std::cout << "<" << this->_name <<  "> Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << std::endl;
        break;
      case 1 :
        std::cout << "<5C4V-TP> " << this->_name <<  " just killed a Badass !" << std::endl;
        std::cout << "<" << this->_name <<  "> Wow, did I really do that?" << std::endl;
        break;
      case 2 :
        std::cout << "<5C4V-TP> " << this->_name <<  " just throw a grenade !" << std::endl;
        std::cout << "<" << this->_name <<  "> Pull pin, throw!" << std::endl;
        break;
      case 3 :
        std::cout << "<5C4V-TP> " << this->_name <<  " just activated VaultHunter.EXE !" << std::endl;
        std::cout << "<" << this->_name <<  "> Defragmenting!" << std::endl;
        break;
      case 4 :
        std::cout << "<5C4V-TP> " << this->_name <<  " just find a rare loot !" << std::endl;
        std::cout << "<" << this->_name <<  "> I'm rich!" << std::endl;
        break;
      default :
        std::cout << "<5C4V-TP> " << this->_name <<  " just accomplished... Nothing..." << std::endl;
        std::cout << "<" << this->_name <<  "> Well..." << std::endl;
        break;
    }
  }
}
