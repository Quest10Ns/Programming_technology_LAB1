#include "Villain.h"

Villain::Villain() {
    std::cout << "Villain default constructor called" << std::endl;
}

Villain::Villain(const std::string& name, const std::string& weaponType, const std::string& crime, const std::string& location, const std::vector<std::string>& skills)
    : Hero(name, weaponType, skills), crime(crime), location(location) {
    std::cout << "Villain parameterized constructor called" << std::endl;
}

Villain::Villain(const Villain& other)
    : Hero(other), crime(other.crime), location(other.location) {
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

void Villain::display() const {
    std::cout << "Villain: " << getName() << "\n"
              << "Weapon: " << getWeapon() << "\n"
              << "Crime: " << getCrime() << "\n"
              << "Location: " << getLocation() << "\n"
              << "Skills: ";
    for (auto it = std::begin(getSkills()); it != std::end(getSkills()); ++it)
        std::cout << *it << ", ";
    std::cout << std::endl;
}