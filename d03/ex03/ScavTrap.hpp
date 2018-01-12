/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:30:35 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/12 12:30:37 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const & model);
  ~ScavTrap(void);
  void challengeNewcomer(void);


private:
  void initProperties(std::string name, ScavTrap *ScavTrap);
};

#endif
