/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 20:58:29 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/05 21:12:18 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public :

        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);

        ClapTrap& operator=(ClapTrap const & rhs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
    private :

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif
