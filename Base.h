#ifndef BASE_H
#define BASE_H
#include <iostream>

class Base{
  public:
    virtual ~Base();
    virtual void display() const = 0;
  };

#endif //BASE_H
