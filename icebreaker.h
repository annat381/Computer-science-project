#include <iostream>
#include <string>
#include "mainship.h"
#pragma once 


using namespace std;


class icebreaker:  public ship {
	public : 
    int  capacity;
    string type;
    void makeSound();
};
