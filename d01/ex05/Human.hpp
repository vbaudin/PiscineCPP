/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:54:40 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/10 11:54:41 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include <iostream>
#include <sstream>

#include "Brain.hpp"

class Human {
  public:
    Brain brain;

    Human(void);
    ~Human(void);
    Brain getBrain(void);
    std::string identify(void);
};

#endif
