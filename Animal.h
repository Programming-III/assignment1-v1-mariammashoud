#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
class animal {
private:
    string name;
    int age;
    bool isHungry;

public:

    animal() {
        name = "";
        age = 0;
    }


    animal(string n, int i) {
        name = n;
        age = i;
    }


    ~animal() {

    }


    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age=a;
    }


    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }


    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    void feed() {
        if (isHungry) {
            cout << "Hungry" << endl;
        }
        else {
            cout << "Not hungry" << endl;
        }
    }
};
//define animal class here 



#endif
