#ifndef HERO_H
#define HRO_H

#include "Base.h"
#include <iostream>
#include <string>
#include <vector>

class Hero : public Base{
  private:
    std::string name;
    std::string weapon;
    std::vector<std::string> skills;
  public:
    Hero();
    Hero(const std::string& name, const std::string& weapon, const std::vector<std::string>& skills);
    Hero(const Hero& other);
    ~Hero();

    void setName(const std::string& name);
    void setWeapon(const std::string& weapon);
    void setSkills(const std::vector<std::string>& skills);

    std::string getName();
    std::string getWeapon();
    std::vector<std::string> getSkills();

    void display() const override;
  };
#endif //BASE_H
