/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 21:08:40 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/07 17:33:24 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << PURPLE <<"Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10) , _energyPoints(10) , _attackDamage(0)
{
    std::cout << PURPLE << "Constructor called" << RESET << std::endl; 
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << PURPLE << "Copy constructor called" << RESET << std::endl; 
    *this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << ICE_BLUE << _name <<  RESET ": attacks " << ICE_BLUE << target << RESET << " causing " << BL_RED << _attackDamage << RESET << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_energyPoints <= 0)
        std::cout << ICE_BLUE << _name <<  RESET << ": cannot attacks it is out of energy points..." << std::endl;
    else if (_hitPoints <= 0)
        std::cout << ICE_BLUE << _name <<  RESET << ": cannot attacks: it is destroyed!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << ICE_BLUE << _name <<  RESET ": lose " << BL_RED << amount << RESET << " hit points !"  << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << ICE_BLUE << _name <<  RESET ": repairs itself, it regains " << BL_GREEN << amount << RESET << " hit points." << std::endl;
        _energyPoints--;
    }
    else if (_energyPoints <= 0)
        std::cout << ICE_BLUE << _name <<  RESET << ": cannot be repaired it is out of energy points..." << std::endl;
    else if (_hitPoints <= 0)
        std::cout << ICE_BLUE << _name <<  RESET << ": cannot be repaired it is destroyed!" << std::endl; 
}
    
ClapTrap::~ClapTrap()
{
    std::cout << PURPLE << "Destructor called" << RESET <<  std::endl; 
}