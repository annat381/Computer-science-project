C++

#include <iostream>
#include <string>

using namespace std;
class ships1 {
public:
    double speed;
    double length;
    double width;
    double displacement;
    int crew;
};

class passenger: public ship  {
public:
    int numberpass;
    int deck ;
    int lifeboat;
};

class tanker:  public ship {
    int  capacity;
    string type;

};

class icebreaker {
   float thickness;

};

class submarine public ship {
    int depth;

};

