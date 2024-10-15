#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>

class Base {
public:
  virtual ~Base() = default;
  virtual void display() const = 0;
};

#endif // BASE_H
