#include "Hero.h"
Hero::Hero() {
    std::cout << "Hero constructor" << std::endl;
}
Hero::Hero(const std::string& name, const std::string& weapon, const std::vector<std::string>& skills):
name(name),weapon(weapon), skills(skills){
    std::cout << "Hero parametrized constructor" << std::endl;
}
Hero::Hero(const Hero& other): name(other.name), weapon(other.weapon), skills(other.skills) {
    std::cout << "Hero copy constructor" << std::endl;
}
Hero::~Hero() {
    std::cout << "Hero destructor" << std::endl;
}
void Hero::setName(const std::string& name) {
    this->name = name;
}
void Hero::setWeapon(const std::string &weapon) {
    this->weapon = weapon;
}
void Hero::setSkills(const std::vector<std::string>& skills) {
    this -> skills = skills;
}
std::string Hero::getName(){
    return name;
}
std::string Hero::getWeapon() {
    return weapon;
}
std::vector<std::string> Hero::getSkills() {
    return skills;
}

void Hero::display() const {
    std::cout << "Hero: " << getName() << "\n"
              << "Weapon: " << getWeapon() << "\n"
              << "Skills: ";
    for (auto it = std::begin(getSkills()); it!=std::end(getSkills()); it++)
        std::cout << *it << ", ";
    std::cout << std::endl;
}