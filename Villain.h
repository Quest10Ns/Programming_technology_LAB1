#ifndef VILLAIN_H
#define VILLAIN_H

#include "Hero.h"
#include <iostream>
#include <string>

class Villain : public Hero {
private:
    std::string crime;
    std::string location;

public:
    Villain();
    Villain(const std::string& name, const std::string& weaponType, const std::string& crime, const std::string& location, const std::string& skills);
    Villain(const Villain& other);
    ~Villain();

    void setLocation(const std::string& location);
    void setCrime(const std::string& crime);
    std::string getCrime() const;
    std::string getLocation() const;

    void display() const override;
};

#endif // VILLAIN_H
