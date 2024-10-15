#include "Hero.h"

Hero::Hero() {
    std::cout << "Hero default constructor called" << std::endl;
}

Hero::Hero(const std::string& name, const std::string& weapon, const std::string& skills)
    : name(name), weapon(weapon), skills(skills) {
    std::cout << "Hero parameterized constructor called" << std::endl;
}

Hero::Hero(const Hero& other)
    : name(other.name), weapon(other.weapon), skills(other.skills) {
    std::cout << "Hero copy constructor called" << std::endl;
}

Hero::~Hero() {
    std::cout << "Hero destructor called" << std::endl;
}

void Hero::setName(const std::string& name) {
    this->name = name;
}

void Hero::setWeapon(const std::string& weapon) {
    this->weapon = weapon;
}

void Hero::setSkills(const std::string& skills) {
    this->skills = skills;
}

std::string Hero::getName() const {
    return name;
}

std::string Hero::getWeapon() const {
    return weapon;
}

std::string Hero::getSkills() const {
    return skills;
}

void Hero::display() const {
    std::cout << "Hero: " << getName() << "\n"
              << "Weapon: " << getWeapon() << "\n"
              << "Skills: " << getSkills() << std::endl;
}
