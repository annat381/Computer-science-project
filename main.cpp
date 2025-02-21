#include "mainship.h"
#include "battleship.cpp"
#include "battleship.h"
#include "destroyer.cpp"
#include "destroyer.h"
#include "icebreaker.cpp"
#include "icebreaker.h"
#include "tanker.cpp"
#include "tanker.h"
#include "containership.cpp"
#include "containership.h"
#include "passenger.cpp"
#include "passenger.h"
#include "submarine.cpp"
#include "submarine.h"
#include "carrier.cpp"
#include "carrier.h"
#include "fishingship.cpp"
#include "fishingship.h"

int main()
{
    battleship s1;
    s1.makeSound();

    destroyer s2;
    s2.makeSound();

    icebreaker s3;
    s3.makeSound();

    tanker s4;
    s4.makeSound();

    containership s5;
    s5.makeSound();

    passenger s6;
    s6.makeSound();

    submarine s7;
    s7.makeSound();

    carrier s8;
    s8.makeSound();

    fishingship s9;
    s9.makeSound();
}
