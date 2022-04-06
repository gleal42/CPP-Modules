#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
    private:
        std::string name;
    public:
        void announce( void );
        Zombie ( std::string name );
        Zombie ();
        ~Zombie ();
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};
#endif
