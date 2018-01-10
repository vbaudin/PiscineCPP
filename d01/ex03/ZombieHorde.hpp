/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:27:15 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 10:27:18 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Zombie.hpp"

class ZombieHorde {
  public:
    Zombie *theHorde;
    int zombieNumber;

    ZombieHorde(int N);
    ~ZombieHorde(void);
    void announce(void);
};


#endif
