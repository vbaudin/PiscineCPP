/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:19:38 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 17:19:40 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Zombie.hpp"

class ZombieEvent {
  public:
    std::string type;

    ZombieEvent(void);

    // Zombie *zombie = new Zombie(std::string name);
    Zombie *newZombie(std::string name);
    void setZombieType(std::string type);
    void randomChump(void);
};


#endif
