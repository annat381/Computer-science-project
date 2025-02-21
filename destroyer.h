#include <iostream>
#include "mainship.h"
#pragma once


using namespace std;


class destroyer :  public ship
{
public:
    void makeSound();
};
