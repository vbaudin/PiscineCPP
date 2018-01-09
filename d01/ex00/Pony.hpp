/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:12:55 by vbaudin           #+#    #+#             */
/*   Updated: 2018/01/09 16:12:57 by vbaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>
#include <sstream>

class Pony {
  public:
    int height;
    int weight;
    int age;
    std::string name;

    Pony(int height, int weight, int age, std::string name);
    ~Pony(void);
    void run(int distance);
    void showInformations(void);
};


#endif
