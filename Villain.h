#ifndef VILLAIN_H
#define VILLAIN_H

#include "Base.h"
#include <iostream>
#include <string>

class Villain : public Base {
private:
    std::string name;
    std::string weapon;
    std::string skills;
    std::string crime;
    std::string location;

public:
    Villain();
    Villain(const std::string& name, const std::string& weaponType, const std::string& crime, const std::string& location, const std::string& skills);
    Villain(const Villain& other);
    ~Villain();

    void setName(const std::string& name);
    void setWeapon(const std::string& weapon);
    void setSkills(const std::string& skills);
    std::string getName() const;
    std::string getWeapon() const;
    std::string getSkills() const;
    void setLocation(const std::string& location);
    void setCrime(const std::string& crime);
    std::string getCrime() const;
    std::string getLocation() const;

    void display() const override;
};

#endif // VILLAIN_H
