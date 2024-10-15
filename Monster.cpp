#include "Monster.h"
#include <iostream>

Monster::Monster() {
    std::cout << "Monster default constructor called" << std::endl;
}

Monster::Monster(const std::string& name, const std::string& description)
    : name(name), description(description) {
    std::cout << "Monster parameterized constructor called" << std::endl;
}

Monster::Monster(const Monster& other)
    : name(other.name), description(other.description) {
    std::cout << "Monster copy constructor called" << std::endl;
}

Monster::~Monster() {
    std::cout << "Monster destructor called" << std::endl;
}

void Monster::setName(const std::string& name) {
    this->name = name;
}

void Monster::setDescription(const std::string& description) {
    this->description = description;
}

std::string Monster::getName() const {
    return name;
}

std::string Monster::getDescription() const {
    return description;
}

void Monster::display() const {
    std::cout << "Monster: " << getName() << "\n"
              << "Description: " << getDescription() << std::endl;
}
