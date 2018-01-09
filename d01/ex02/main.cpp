/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:19:53 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 17:19:57 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void) {
  Zombie *test = new Zombie("Max", "42");
  test->announce();

  ZombieEvent *zombieEvent = new ZombieEvent();
  zombieEvent->setZombieType("Unknowned Breed");
  Zombie *testEvent = zombieEvent->newZombie("Carlos");
  testEvent->announce();

  zombieEvent->randomChump();

  delete test;
  delete testEvent;
  delete zombieEvent;
  return (0);
}
