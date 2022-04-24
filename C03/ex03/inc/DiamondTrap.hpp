/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:18:32 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 04:11:49 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap {
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap &operator=(const DiamondTrap &diamondtrap);
	DiamondTrap(const DiamondTrap &diamondtrap);
	~DiamondTrap();
	void attack(const std::string& target);
	void whoAmI();
	void setstats();
};

#endif
