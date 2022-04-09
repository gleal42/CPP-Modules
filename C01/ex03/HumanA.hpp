#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		const Weapon &weapon;
		std::string name;
	public:
		void attack();
		HumanA (const std::string &name, const Weapon &arm);
};

#endif
