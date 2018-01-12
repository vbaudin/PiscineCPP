/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:30:35 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/12 12:30:37 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>

class	ScavTrap {

public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const & model);
  ~ScavTrap(void);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void challengeNewcomer(void);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void setName(std::string name);
  std::string getName(void);

private:
  unsigned int _hitPoints;
  unsigned int _maxHitPoints;
  unsigned int _energyPoints;
  unsigned int _maxEnergyPoints;
  unsigned int _level;
  unsigned int _meleeAttackDamage;
  unsigned int _rangedAttackDamage;
  unsigned int _armorDamageReduction;
  std::string _name;
  void initProperties(std::string name, ScavTrap *ScavTrap);
};

#endif
