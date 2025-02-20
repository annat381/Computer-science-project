#include <iostream>
#include <string>
#include"mainship.h"
#pragma once

class tanker:  public ship {
	public:	
	
	tanker(int capacity_){}
	int capacity;
    void makeSound();
};
