#include <iostream>
#include <string>
#include"mainship.h"
#pragma once

class tanker : public ship
{
public:
	double capacity;
    void makeSound();
};
