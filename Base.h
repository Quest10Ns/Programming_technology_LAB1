#ifndef BASE_H
#define BASE_H
#include <iostream>

class Base{
  public:
    virtual ~Base() {
      std::cout << "Base destructor called" << std::endl;
    };
    virtual void display() const = 0;
  };

#endif //BASE_H
