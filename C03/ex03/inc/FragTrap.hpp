/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:38:33 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 03:58:16 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:
	
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap &operator=(const FragTrap &fragtrap);
	FragTrap(const FragTrap &fragtrap);
	virtual ~FragTrap();
	void highFivesGuys(void);
	virtual void attack(const std::string& target);
	virtual void setstats();
};

#endif
