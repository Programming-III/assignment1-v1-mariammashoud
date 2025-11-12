#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"
#include "animal.h"
#include "Mammal.h"


class Bird : public animal {
private:
    float wingSpan;

public:

    Bird() : animal() {
        wingSpan = 0.0;
    }


    Mammal(string W) : animal(n, a) {
        furColor = W;
    }


    ~Mammal() {

    }


    void setWingspan(int W){
        wingSpan= W;
    }



    float getWingSpan() {
        return wingSpan;
    }
};

//define enclosure class here 








#endif
