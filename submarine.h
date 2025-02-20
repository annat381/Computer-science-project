#include <iostream>
#include <string>
#include "mainship.h"
#pragma once 
using namespace std;

class submarine: public ship {
	public:	
    int depth;
    void makeSound();

};
