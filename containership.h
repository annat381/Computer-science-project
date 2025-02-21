#include <iostream>
#include "mainship.h"
#pragma once


using namespace std;


class containership :  public ship
{
public:
    int amount_of_containers;
    double maximal_mass;
    void makeSound();
};
