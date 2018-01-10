/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:27:11 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 10:27:12 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string randName(void) {
  // std::cout << "On lance un nouveau randName !!" << std::endl;
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

std::string randType(void) {
  // std::cout << "On lance un nouveau randType !!" << std::endl;
  srand((unsigned int)time(NULL));
  int random = rand() % 6;
  switch (random) {
    case 0 : return "Lurcker";
    case 1 : return "Baneling";
    case 2 : return "Queen";
    case 3 : return "Roach";
    case 4 : return "Mutalisk";
    case 5 : return "Zergling";
    default : return "Broodlord";
  }
}

void ZombieHorde::announce(void) {
  for (int i = 0; i < this->zombieNumber; i++) {
    this->theHorde[i].announce();
  }
}

ZombieHorde::ZombieHorde(int N) {
  this->zombieNumber = N;
  this->theHorde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    this->theHorde[i].name = randName();
    this->theHorde[i].type = randType();
  }
}

ZombieHorde::~ZombieHorde(void) {
  delete[] this->theHorde;
}
