/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:09:32 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 13:09:35 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>
#include <sstream>

class Weapon {
  public:
    Weapon(std::string type);
    ~Weapon(void);
    void setType(std::string type);
    std::string const &getType(void);

    std::string type;
};

#endif
