#ifndef HERO_H
#define HERO_H

#include "Base.h"

class Hero : public Base {
private:
    std::string name;
    std::string weapon;
    std::string skills;

public:
    Hero();
    Hero(const std::string& name, const std::string& weapon, const std::string& skills);
    Hero(const Hero& other);
    ~Hero();

    void setName(const std::string& name);
    void setWeapon(const std::string& weapon);
    void setSkills(const std::string& skills);
    std::string getName() const;
    std::string getWeapon() const;
    std::string getSkills() const;

    void display() const override;
};

#endif // HERO_H
