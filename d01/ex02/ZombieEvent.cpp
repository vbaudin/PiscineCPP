/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:19:44 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 17:19:45 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string randName(void) {
  srand((unsigned int)time(NULL));
  int random = rand() % 6;
  switch (random) {
    case 0 : return "Beth";
    case 1 : return "Shane";
    case 2 : return "Abraham";
    case 3 : return "Gleen";
    case 4 : return "Hershel";
    case 5 : return "Jessie";
    default : return "Maddie";
  }
}

ZombieEvent::ZombieEvent(void) {
}

void ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name, this->type);
	return (zombie);
}

void ZombieEvent::randomChump(void) {
  Zombie zombie = Zombie(randName(), this->type);
  zombie.announce();
}
