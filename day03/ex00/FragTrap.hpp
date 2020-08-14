
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap &  operator=(FragTrap const & rhs);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        specialAttack(std::string const & target);
        void        ultraAttack(std::string const & target);
        void        uselessAttack(std::string const & target);
        void        takeDamage(std::string const & target);
        void        beRepaired(std::string const & target);
        void        vaulthunter_dot_exe(std::string const & target);

    private:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _maxhp;
        unsigned int    _ep;
        unsigned int    _maxep;
        unsigned int    _lv;
        unsigned int    _melee_dmg;
        unsigned int    _ranged_dmg;
        unsigned int    _armor_dmg_red;

};


#endif
