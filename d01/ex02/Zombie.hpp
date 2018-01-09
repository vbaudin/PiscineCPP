/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:19:48 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 17:19:49 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie {
  public:
    std::string name;
    std::string type;

    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void announce(void);
};


#endif
