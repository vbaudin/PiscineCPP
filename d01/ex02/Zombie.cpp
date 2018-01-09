/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:19:29 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 17:19:31 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void) {
  std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiiinnnsss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) {
  this->name = name;
  this->type = type;
}

Zombie::~Zombie(void) {
  std::cout << this->name << " has been killed by Rick..." << std::endl;
}
