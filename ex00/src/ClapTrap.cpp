/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 21:08:40 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/05 21:17:19 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10) , _energyPoints(10) , _attackDamage(0)
{
    std::cout << "Constructor called" << std::endl; 
}

ClapTrap::ClapTrap(ClapTrap const & src)
{

    std::cout << "Copy constructor called" << std::endl; 
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl; 
}

void ClapTrap::attack(const std::string& target)
{

}

