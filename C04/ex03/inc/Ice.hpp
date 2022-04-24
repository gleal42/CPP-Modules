#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>

#include "AMateria.hpp"

class ICharacter;
class Ice : public AMateria {
private:
    
public:
    Ice();
    Ice &operator=(const Ice &ice);
    Ice(const Ice &ice);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
    void setType(std::string const type);
};

#endif