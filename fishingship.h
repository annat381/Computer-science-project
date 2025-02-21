#include <iostream>
#include "mainship.h"
#pragma once


using namespace std;


class fishingship :  public ship
{
public:
    double volume_of_bilge;
    void makeSound();
};
