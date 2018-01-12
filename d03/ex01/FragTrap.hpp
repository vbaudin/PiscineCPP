/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:12:10 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/11 15:12:11 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>

class	FragTrap {

public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(FragTrap const & model);
  ~FragTrap(void);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void vaulthunter_dot_exe(std::string const & target);
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
  void initProperties(std::string name, FragTrap *fragtrap);
};

#endif
