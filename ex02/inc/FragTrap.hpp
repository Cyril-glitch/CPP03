/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:37:13 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/07 18:43:38 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp" 

class FragTrap : public ClapTrap 
{
    public :

        FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);
        FragTrap& operator=(FragTrap const & rhs);

        void highFivesGuys(void);
};

#endif