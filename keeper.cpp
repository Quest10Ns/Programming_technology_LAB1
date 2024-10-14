#include "Keeper.h"
#include "Hero.h"
#include "Villain.h"
#include "Monster.h"
#include <fstream>
#include <iostream>
#include <sstream>

Keeper::Keeper() : items(nullptr), size(0), capacity(0) {
    std::cout << "Keeper constructor called" << std::endl;
}

Keeper::~Keeper() {
    for (int i = 0; i < size; ++i) {
        delete items[i];
    }
    delete[] items;
    std::cout << "Keeper destructor called" << std::endl;
}

void Keeper::add(Base* item) {
    if (size == capacity) {
        resize();
    }
    items[size++] = item;
}

void Keeper::del(int index) {
    if (index >= 0 && index < size) {
        delete items[index];
        for (int i = index; i < size - 1; ++i) {
            items[i] = items[i + 1];
        }
        --size;
    } else {
        std::cout << "Invalid index" << std::endl;
    }
}

void Keeper::save(const std::string& filename) {
    std::ofstream file(filename);
    for (int i = 0; i < size; ++i) {
        if (dynamic_cast<Hero*>(items[i])) {
            file << "Hero\n" << dynamic_cast<Hero*>(items[i])->getName() << "\n"
                 << dynamic_cast<Hero*>(items[i])->getWeapon() << "\n"
                 << dynamic_cast<Hero*>(items[i])->getSkills() << "\n";
        } else if (dynamic_cast<Villain*>(items[i])) {
            file << "Villain\n" << dynamic_cast<Villain*>(items[i])->getName() << "\n"
                 << dynamic_cast<Villain*>(items[i])->getWeapon() << "\n"
                 << dynamic_cast<Villain*>(items[i])->getCrime() << "\n"
                 << dynamic_cast<Villain*>(items[i])->getLocation() << "\n"
                 << dynamic_cast<Villain*>(items[i])->getSkills() << "\n";
        } else if (dynamic_cast<Monster*>(items[i])) {
            file << "Monster\n" << dynamic_cast<Monster*>(items[i])->getName() << "\n"
                 << dynamic_cast<Monster*>(items[i])->getDescription() << "\n";
        }
    }
}

void Keeper::load(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        Base* item = create_item(line);
        add(item);
    }
}

void Keeper::print() const {
    for (int i = 0; i < size; ++i) {
        items[i]->display();
    }
}

void Keeper::resize() {
    capacity = (capacity == 0) ? 1 : capacity * 2;
    Base** new_items = new Base*[capacity];
    for (int i = 0; i < size; ++i) {
        new_items[i] = items[i];
    }
    delete[] items;
    items = new_items;
}

Base* Keeper::create_item(const std::string& data) {
    std::istringstream iss(data);
    std::string type;
    iss >> type;
    if (type == "Hero") {
        std::string name, weapon, skills;
        std::getline(iss, name);
        std::getline(iss, weapon);
        std::getline(iss, skills);
        return new Hero(name, weapon, skills);
    } else if (type == "Villain") {
        std::string name, weapon, crime, location, skills;
        std::getline(iss, name);
        std::getline(iss, weapon);
        std::getline(iss, crime);
        std::getline(iss, location);
        std::getline(iss, skills);
        return new Villain(name, weapon, crime, location, skills);
    } else if (type == "Monster") {
        std::string name, description;
        std::getline(iss, name);
        std::getline(iss, description);
        return new Monster(name, description);
    } else {
        throw std::runtime_error("Unknown item type");
    }
}
