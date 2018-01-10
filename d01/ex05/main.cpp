/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:54:51 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 11:54:52 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main(void) {
  Human bob;
  std::cout << bob.identify() << std::endl;
  std::cout << bob.getBrain().identify() << std::endl;
}
