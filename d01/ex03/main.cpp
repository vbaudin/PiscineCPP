/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:27:06 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 10:27:08 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void) {
  ZombieHorde *HordeTest = new ZombieHorde(10);
  HordeTest->announce();
  delete HordeTest;
}
