/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:49:28 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/12 17:49:29 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {

public:
  NinjaTrap(void);
  NinjaTrap(std::string name);
  NinjaTrap(NinjaTrap const & model);
  ~NinjaTrap(void);
  void ninjaShoebox(FragTrap robot);
  void ninjaShoebox(ScavTrap robot);
  void ninjaShoebox(NinjaTrap robot);

private:
  void initProperties(std::string name, NinjaTrap *NinjaTrap);
};

#endif
