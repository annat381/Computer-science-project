#include <iostream>
#include <string>
#include "mainship.h"
#pragma once 
using namespace std;

class passenger: public ship  {
public:
    int numberpass;
    int deck ;

    int lifeboat;
    void makeSound();
};
