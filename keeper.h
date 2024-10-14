#ifndef KEEPER_H
#define KEEPER_H

#include "Base.h"
#include <string>

class Keeper {
public:
    Keeper();
    ~Keeper();

    void add(Base* item);
    void del(int index);
    void save(const std::string& filename);
    void load(const std::string& filename);
    void print() const;

private:
    Base** items;
    int size;
    int capacity;

    void resize();
    Base* create_item(const std::string& data);
};

#endif // KEEPER_H
