/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:48:04 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/07 18:31:01 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
    ScavTrap svtp1("svtp1");
        svtp1.guardGate();
        svtp1.attack("svtp2");
        svtp1.takeDamage(5);
        svtp1.beRepaired(5); 
        svtp1.attack("svtp2");
        svtp1.takeDamage(10);
        svtp1.attack("svtp2");
        svtp1.beRepaired(5);
        svtp1.takeDamage(200);
        svtp1.attack("svtp2");
        svtp1.beRepaired(100);
}