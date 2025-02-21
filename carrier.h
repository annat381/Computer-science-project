#include <iostream>
#include "mainship.h"
#pragma once


using namespace std;


class carrier :  public ship
{
public:
    int amount_of_planes;
    void makeSound();
};
