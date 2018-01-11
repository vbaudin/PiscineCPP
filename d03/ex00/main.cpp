/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:12:14 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/11 15:12:15 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
  FragTrap *Champ = new FragTrap();
  FragTrap *Champ2 = new FragTrap("5H4D0W-TP");
  FragTrap *Champ3 = new FragTrap(*Champ2);

  Champ->rangedAttack(Champ2->getName());
  Champ->takeDamage(15);
  Champ->takeDamage(85);
  Champ->takeDamage(15);
  Champ->vaulthunter_dot_exe(Champ2->getName());
  Champ->vaulthunter_dot_exe(Champ2->getName());
  Champ->vaulthunter_dot_exe(Champ2->getName());
  Champ->vaulthunter_dot_exe(Champ2->getName());
  Champ->vaulthunter_dot_exe(Champ2->getName());
  
  delete Champ;
  delete Champ2;
  delete Champ3;
}
