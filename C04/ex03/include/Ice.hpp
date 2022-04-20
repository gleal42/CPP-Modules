#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>

class AMateria;
class ICharacter;

class Ice{
private:
    
public:
    Ice();
    Ice &operator=(const Ice &ice);
    Ice(const Ice &ice);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif