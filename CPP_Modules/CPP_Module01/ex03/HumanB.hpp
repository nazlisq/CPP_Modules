#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* weapon;
        std::string name;
    public:
        HumanB(std::string nameTmp);
        void    attack();
		~HumanB();
        void    setWeapon(Weapon &Weapon);
};