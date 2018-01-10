/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:54:26 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 11:54:29 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
  std::stringstream	streamedAdress;

	streamedAdress << this;
	this->adress = streamedAdress.str();
}

Brain::~Brain(void) {}

std::string Brain::identify(void) {
  return (this->adress);
}
