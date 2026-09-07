/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 21:08:40 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/07 19:07:45 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << MINT <<"FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << MINT << "FragTrap constructor called" << RESET << std::endl; 
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
    std::cout << MINT << "FragTrap Copy constructor called" << RESET << std::endl; 
}

FragTrap& FragTrap::operator=(FragTrap const & rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
}    

void FragTrap::highFivesGuys(void)
{
    std::cout << ICE_BLUE << _name <<  RESET << ": " << "\"C'moooon! Give me a high five!\"" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << MINT << "FragTrap destructor called" << RESET <<  std::endl; 
}