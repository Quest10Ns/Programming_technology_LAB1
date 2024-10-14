#include "Keeper.h"
#include "Hero.h"
#include "Villain.h"
#include "Monster.h"
#include <iostream>
#include <string>


int main() {
    Keeper keeper;
    int choice;

    while (true) {
        std::cout << "1. Add Hero" << std::endl;
        std::cout << "2. Add Villain" << std::endl;
        std::cout << "3. Add Monster" << std::endl;
        std::cout << "4. Remove Object" << std::endl;
        std::cout << "5. Display Objects" << std::endl;
        std::cout << "6. Save to File" << std::endl;
        std::cout << "7. Load from File" << std::endl;
        std::cout << "8. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name, weapon, skills;
            std::cout << "Enter Hero name: ";
            std::cin >> name;
            std::cout << "Enter Hero weapon type: ";
            std::cin >> weapon;
            std::cout << "Enter Hero skills (separated by spaces): ";
            std::cin.ignore(); // Ignore the newline character left in the buffer
            std::getline(std::cin, skills);
            keeper.add(new Hero(name, weapon, skills));
        } else if (choice == 2) {
            std::string name, weaponType, crime, location, skills;
            std::cout << "Enter Villain name: ";
            std::cin >> name;
            std::cout << "Enter Villain weapon type: ";
            std::cin >> weaponType;
            std::cout << "Enter Villain crime: ";
            std::cin >> crime;
            std::cout << "Enter Villain location: ";
            std::cin >> location;
            std::cout << "Enter Villain skills (separated by spaces): ";
            std::cin.ignore(); // Ignore the newline character left in the buffer
            std::getline(std::cin, skills);
            keeper.add(new Villain(name, weaponType, crime, location, skills));
        } else if (choice == 3) {
            std::string name, description;
            std::cout << "Enter Monster name: ";
            std::cin >> name;
            std::cout << "Enter Monster description: ";
            std::cin.ignore();
            std::getline(std::cin, description);
            keeper.add(new Monster(name, description));
        } else if (choice == 4) {
            int index;
            std::cout << "Enter index to remove: ";
            std::cin >> index;
            try {
                keeper.del(index);
            } catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        } else if (choice == 5) {
            keeper.print();
        } else if (choice == 6) {
            std::string filename;
            std::cout << "Enter filename to save: ";
            std::cin >> filename;
            try {
                keeper.save(filename);
            } catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        } else if (choice == 7) {
            std::string filename;
            std::cout << "Enter filename to load: ";
            std::cin >> filename;
            try {
                keeper.load(filename);
            } catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        } else if (choice == 8) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
