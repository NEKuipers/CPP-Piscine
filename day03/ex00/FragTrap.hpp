
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);



    private:
        std::string     name;
        unsigned int    _hp;
        unsigned int    _maxhp;
        unsigned int    _ep;
        unsigned int    _maxep;
        unsigned int    _lv;
        unsigned int    _melee_dps;
        unsigned int    _ranged_dps;
        unsigned int    _armor_dmg_red;
    


}


#endif
