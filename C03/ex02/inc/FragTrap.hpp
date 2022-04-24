/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:38:33 by gleal             #+#    #+#             */
/*   Updated: 2022/04/24 02:27:36 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
private:
	
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap &operator=(const FragTrap &fragtrap);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();
	void highFivesGuys(void);
	void attack(const std::string& target);
};

#endif

