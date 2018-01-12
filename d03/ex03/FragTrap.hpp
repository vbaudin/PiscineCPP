/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:12:10 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/11 15:12:11 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

// class ClapTrap;

class	FragTrap : public ClapTrap {

public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(FragTrap const & model);
  ~FragTrap(void);
  void vaulthunter_dot_exe(std::string const & target);

private:
  void initProperties(std::string name, FragTrap *fragtrap);
};

#endif
