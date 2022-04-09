#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string& getType() const;
		void setType(std::string str);
		Weapon (std::string str);
		Weapon ();
		Weapon(const Weapon &pt1);
};

#endif
