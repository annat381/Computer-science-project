#include <iostream>
#include <string>
#pragma once
using namespace std;
class ship
{
public:
    double speed;
    double length;
    double width;
    double displacement;
    int crew;
    virtual void makeSound() {};
};
