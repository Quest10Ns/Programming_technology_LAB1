#include "Villain.h"

Villain::Villain() {
    std::cout << "Villain default constructor called" << std::endl;
}

Villain::Villain(const std::string& name, const std::string& weaponType, const std::string& crime, const std::string& location, const std::string& skills)
    : name(name), weapon(weaponType), skills(skills), crime(crime), location(location) {
    std::cout << "Villain parameterized constructor called" << std::endl;
}

Villain::Villain(const Villain& other)
    : name(other.name), weapon(other.weapon), skills(other.skills), crime(other.crime), location(other.location) {
    std::cout << "Villain copy constructor called" << std::endl;
}

Villain::~Villain() {
    std::cout << "Villain destructor called" << std::endl;
}

void Villain::setCrime(const std::string& crime) {
    this->crime = crime;
}

void Villain::setLocation(const std::string& location) {
    this->location = location;
}

std::string Villain::getCrime() const {
    return crime;
}

std::string Villain::getLocation() const {
    return location;
}

void Villain::setName(const std::string& name) {
    this->name = name;
}

void Villain::setWeapon(const std::string& weapon) {
    this->weapon = weapon;
}

void Villain::setSkills(const std::string& skills) {
    this->skills = skills;
}

std::string Villain::getName() const {
    return name;
}

std::string Villain::getWeapon() const {
    return weapon;
}

std::string Villain::getSkills() const {
    return skills;
}

void Villain::display() const {
    std::cout << "Villain: " << getName() << "\n"
              << "Weapon: " << getWeapon() << "\n"
              << "Crime: " << getCrime() << "\n"
              << "Location: " << getLocation() << "\n"
              << "Skills: " << getSkills() << std::endl;
}
