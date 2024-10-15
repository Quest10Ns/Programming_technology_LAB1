#ifndef MONSTER_H
#define MONSTER_H

#include "Base.h"

class Monster : public Base {
private:
    std::string name;
    std::string description;

public:
    Monster();
    Monster(const std::string& name, const std::string& description);
    Monster(const Monster& other);
    ~Monster();

    void setName(const std::string& name);
    void setDescription(const std::string& description);
    std::string getName() const;
    std::string getDescription() const;

    void display() const override;
};

#endif // MONSTER_H
