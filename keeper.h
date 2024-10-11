#ifndef KEEPER_H
#define KEEPER_H

#include "Base.h"
#include <vector>
#include <fstream>

class Keeper {
private:
    std::vector<Base*> objects;

public:
    Keeper();
    ~Keeper();

    void addObject(Base* obj);
    void delObject(int index);
    void displayObjects();
    void save(const std::string& filename);
    void load(const std::string& filename);
};

#endif //KEEPER_H
