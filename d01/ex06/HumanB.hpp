/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:09:21 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 13:09:22 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include <sstream>

#include "Weapon.hpp"

class HumanB {
  public:
    HumanB(std::string name);
    ~HumanB(void);
    void attack(void);
    void setWeapon(Weapon &weapon);

    std::string name;
    Weapon *type;
};

#endif
