#include <iostream>
#include "mainship.h"
#pragma once


using namespace std;


class battleship : public ship
{
public:
    int amount_of_cannons;
    double caliber;
    double armor;
    void makeSound();
};
