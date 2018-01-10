/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:09:29 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 13:09:30 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
  this->type = type;
}

Weapon::~Weapon(void) {}

void Weapon::setType(std::string type) {
  this->type = type;
}

std::string const &Weapon::getType(void) {
  return (this->type);
}
