/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 21:08:40 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/07 18:31:45 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << ORANGE <<"ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << ORANGE << "ScavTrap constructor called" << RESET << std::endl; 
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
    std::cout << ORANGE << "ScavTrap Copy constructor called" << RESET << std::endl; 
}

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
}    

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << ICE_BLUE << _name <<  RESET ": strikes " << ICE_BLUE << target << RESET << " causing " << BL_RED << _attackDamage << RESET << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_energyPoints <= 0)
        std::cout << ICE_BLUE << _name <<  RESET << ": cannot attack: it wants to sleep..." << std::endl;
    else if (_hitPoints <= 0)
        std::cout << ICE_BLUE << _name <<  RESET << ": cannot attack: it is dead..." << std::endl; 
}

void ScavTrap::guardGate(void)
{
    std::cout << ICE_BLUE << _name <<  RESET ": is now in Gatekeeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << ORANGE << "Scavtrap destructor called" << RESET <<  std::endl; 
}