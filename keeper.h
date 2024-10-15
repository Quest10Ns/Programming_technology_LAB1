#ifndef KEEPER_H
#define KEEPER_H

#include "Base.h"
#include "Hero.h"
#include <string>

class Keeper {
public:
    Keeper();
    ~Keeper();

    void add(Base* item);
    void del(int index);
    void edit(int index);
    void save();
    void load();
    void print() const;

private:
    Base** items;
    int size;
    int capacity;

    void resize();
};

#endif // KEEPER_H
