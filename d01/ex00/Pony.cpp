/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:12:41 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 16:12:43 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int height, int weight, int age, std::string name) {
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->age = age;
    std::cout << "The Pony " << this->name << " is born !" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "The Pony " << this->name << " is dead... :(" << std::endl;
}

void Pony::run(int distance) {
  std::cout << this->name << " run " << distance << " kilometers !" << std::endl;
}

void Pony::showInformations(void) {
  std::cout << this->name << "'s informations :" << std::endl;
  std::cout << "Height = " << this->height << " meters." << std::endl;
  std::cout << "Weight = " << this->weight << " pounds." << std::endl;
  std::cout << "Age = " << this->age << "years old." << std::endl;
}
