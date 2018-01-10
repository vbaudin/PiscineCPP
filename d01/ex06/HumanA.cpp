/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:09:05 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 13:09:06 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : type(type) {
  this->name = name;
  this->type = type;
}

HumanA::~HumanA(void) {}

void HumanA::attack(void) {
  std::cout << name << " attacked with " << this->type.type << std::endl;
}
