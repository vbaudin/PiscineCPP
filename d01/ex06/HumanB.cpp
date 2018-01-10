/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:09:16 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 13:09:17 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
  this->name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
  this->type = &weapon;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void) {
  std::cout << name << " attacked with " << this->type->type << std::endl;
}
