#ifndef MONSTER_H
#define MONSTER_H

#include "Hero.h"

class Monster : public Hero {
private:
    std::string description;
public:
    Monster();
    Monster(const std::string& name, const std::string& description);
    Monster(const Monster& other);
    ~Monster();

    void setDescription(const std::string& description);
    std::string getDescription() const;

    void display() const override;
};

#endif // MONSTER_H
