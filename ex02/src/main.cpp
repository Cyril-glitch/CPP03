/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:48:04 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/07 18:54:24 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main()
{
    FragTrap fgtp1("fgtp1");
        fgtp1.attack("fgtp2");
        fgtp1.takeDamage(99);
        fgtp1.beRepaired(99);
        fgtp1.highFivesGuys();
        fgtp1.takeDamage(100);
        fgtp1.beRepaired(100);
}