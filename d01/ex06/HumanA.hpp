/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:09:10 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 13:09:13 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include <sstream>

#include "Weapon.hpp"

class HumanA {
  public:
    HumanA(std::string name, Weapon &type);
    ~HumanA(void);
    void attack(void);

    std::string name;
    Weapon &type;
};

#endif
