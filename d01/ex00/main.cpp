/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:12:50 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 16:12:51 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(int height, int weight, int age, std::string name) {
  Pony *heap = new Pony(height, weight, age, name);
  heap->showInformations();
  heap->run(10);
  delete heap;
}

void ponyOnTheStack(int height, int weight, int age, std::string name) {
  Pony stack = Pony(height, weight, age, name);
  stack.showInformations();
  stack.run(7);
}

int main(void) {

  ponyOnTheHeap(2, 80, 10, "Petit cheval de manege");

  std::cout << std::endl;

  ponyOnTheStack(1, 120, 7, "Tom Elliott");

  return (0);
}
