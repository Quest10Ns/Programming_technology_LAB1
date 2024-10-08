#ifndef VILLIAN_H
#define VILLIAN_H
#include "Base.h"
#include "Hero.h"
class Villian : public Hero {
    private:
        std::string crime;
        std::string location;
    public:
        Villian();
        Villian(const std::string& name, const std::string& weapon, const std::vector<std::string>& skills, const std::string& crime, const std::string& location);
        Villian(const Villian& other);
        ~Villian();

        void setCrime(const std::string& crime);
        void setLocation(const std::string& location);

        std::string getCrime();
        std::string getLocation();

        void display() const override;
};
#endif //VILLIAN_H
