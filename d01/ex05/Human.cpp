/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:54:36 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 11:54:37 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
  this->brain = Brain();
}

Human::~Human(void) {}

Brain Human::getBrain(void) {
  return (this->brain);
}

std::string Human::identify(void) {
  return (this->brain.identify());
}
