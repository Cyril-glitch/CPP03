/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:37:13 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/07 18:16:02 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp" 

class ScavTrap : public ClapTrap 
{
    public :

        ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);
        ScavTrap& operator=(ScavTrap const & rhs);

        void attack(const std::string& target);

        void    guardGate(); 
};

#endif