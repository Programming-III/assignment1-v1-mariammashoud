#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here

#include <string>

class Visitor {
private:
    string VisitorName;
    int ticketsBought;


public:

    Visitor(string name, int ticketsBought){
        VisitorName = name;
        this->ticketsBought = ticketsBought;

    }





    ~Visitor(){

    }


   void setVis


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

#e





#endif
