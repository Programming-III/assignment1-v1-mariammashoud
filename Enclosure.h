#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"
#include "animal.h"
#include "Mammal.h"
//

include "animal.h"
class Enclosure {
private:

    int capacity;
    Animal* animal;
    int currentCount;

public:

    Enclosure() {

    }


    Course( int count, int c) {

        capacity =c;
        currentCount = count;
        currentCount = 0;
        animal = new Animal[capacity];
    }


    ~Animal() {
        delete[] animal;
    }


    void addAnimal(const Animal& a) {
        if (currentCount < capacity) {
            Animal[currentAnimal] = a;
            currentCount++;
        } else {
            cout << "Capcity is full!" << endl;
        }
    }


    void displayAnimals() {
        cout << "Animal: " << currentCount << " - " << currentCount << endl;

        if (currentCount == 0)
            cout << "None" << endl;
        else {
            for (int i = 0; i < currentCount; i++) {
                cout << animal[i].getName();
                if (i != currentCount - 1)
                    cout << ", ";
            }
            cout << endl;
        }
    }
};

#endif

#endif //ANIMAL_ENCLOSURE_H

//define enclosure class here 








#endif
